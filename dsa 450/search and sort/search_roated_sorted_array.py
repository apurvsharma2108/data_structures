class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return an integer
    def search(self, a,target):
        l=0
        r=len(a)-1

        while(l<=r):
            mid=(l+r)//2

            if (a[mid]==target):
                return mid 
            
            elif (a[mid]>=a[l]):
                if (target<=a[mid] and target>=a[l]):
                    r-=1
                else:
                    l+=1
            else:
                if (target>=a[mid] and target<=a[r]):
                    l+=1
                else:
                    r-=1
        return -1



