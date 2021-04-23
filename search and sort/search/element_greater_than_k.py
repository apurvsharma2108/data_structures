a=[2,3,5,6,8,10,12]
x=int(input())
low=0
high=x
ans=-1
while low<=high:
    mid=low+(high-low)//2
    if a[mid]>=x:
        ans=mid
        high=mid-1
    else:
        low=mid+1
print(ans)
