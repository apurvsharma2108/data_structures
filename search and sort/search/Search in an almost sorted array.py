def func(a,n,x):
    start = 0
    end = n - 1
    while end >= start:
        mid = (start + end) // 2
        if a[mid] == x:
            return mid
        if mid+1<=end and  a[mid+1]==x:
            return mid+1
        if mid-1>=start and  a[mid-1]==x:
            return mid-1
        if a[mid]<x:
            start=mid+2
        else:
            end=mid-2
    return -1

a=[5,10,30,20,40]
n=len(a)
x=40
print(func(a,n,x))
