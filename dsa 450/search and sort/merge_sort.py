def merge(a,left,mid,right):
    i,j,k,q=left,mid,0,0
    temp=[0]*(right-left+1)
    count=0
    while(i<mid and j<=right):# 2 parts array  therefor 0,mid-1 and mid , right
        if (a[i]<=a[j]): # no inversion
            temp[k]=a[i]
            k+=1
            i+=1
        else:
            temp[k]=a[j]
            k+=1
            j+=1
            count+=mid-i   
    
    while(i<mid):
        temp[k]=a[i]
        k+=1
        i+=1
    while(j<=right):
        temp[k]=a[j]
        k+=1
        j+=1
    
    for i in range(left,right+1):
        a[i]=temp[q]
        q+=1
    return a
    

def merge_sort(a,left,right):
        count=0
        if right>left:
            mid=(left+right)//2

            left_count=merge_sort(a, left, mid)
            right_count=merge_sort(a, mid+1, right)
            final_count=merge(a,left,mid+1,right)
            return final_count

        return count
    
    
def inversionCount(a, n):
    ans=merge_sort(a,0,n-1)
    return ans

if __name__=="__main__":
    a=[6, 5, 12, 10, 9, 1]
    print(inversionCount(a, 5))