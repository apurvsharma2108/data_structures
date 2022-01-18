a=[1,2,3,4,5]
l,r=0,len(a)-1
item=2
while(l<=r):
    mid=(l+r)//2
    if a[mid]==item:
        print("found")
        break
    elif a[mid]>item:
        r=mid-1
    else:
        l=mid+1
