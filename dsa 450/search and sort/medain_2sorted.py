import math
class Solution:
 #    Take minimum size of two array. Possible number of partitions are from 0 to m in m size array.
 #  Try every cut in binary search way. When you cut first array at i then you cut second array at (m + n + 1)/2 - i
 # Now try to find the i where a[i-1] <= b[j] and b[j-1] <= a[i]. So this i is partition around which lies the median.
    def findMedianSortedArrays(self, a1: List[int], a2: List[int]) -> float:
        if(len(a1)>len(a2)):
            # //if input1 length is greater than switch them so that input1 is smaller than input2.
            a1,a2=a2,a1
        x=len(a1)
        y=len(a2)
        
        low=0
        high=x
        # P-X + P-Y =(x+y+1)//2 reason we are doing +1 is it plays well with both odd and even
        while(low<=high):
            partition_x=(low+high)//2
            partition_y=((x+y+1)//2)-partition_x  #P-X + P-Y =(x+y+1)//2
            
            #//if partitionX is 0 it means nothing is there on left side. Use -INF for maxLeftX
            #//if partitionX is length of input then there is nothing on right side. Use +INF for minRightX
            
            Mx_left_x= -math.inf if(partition_x==0) else a1 [partition_x-1]
            Mn_right_x= math.inf if(partition_x==x) else a1 [partition_x]
            
            Mx_left_y=-math.inf if(partition_y==0) else a2[partition_y-1]
            Mn_right_y=math.inf if(partition_y==y) else a2[partition_y]
            
            
            if (Mx_left_x <= Mn_right_y) and (Mx_left_y <=Mn_right_x):
                
                #//We have partitioned array at correct place
                #// Now get max of left elements and min of right elements to get the median in case of even length combined array size
                #// or get max of left for odd length combined array size.
                
                if((x+y)%2==0):
                    return (max(Mx_left_x,Mx_left_y)+min(Mn_right_x,Mn_right_y))/2
                else:
                    return (max(Mx_left_x,Mx_left_y))
            elif (Mx_left_x > Mn_right_y):#/we are too far on right side for partitionX. Go on left side.
                high=partition_x-1
            else:#//we are too far on left side for partitionX. Go on right side.
                low=partition_x+1