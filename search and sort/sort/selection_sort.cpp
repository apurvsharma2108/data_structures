def selection_sort(a,n):
    for i in range(0,n-2):
        imin=i
        for j in range(i+1,n):
            if a[j]<a[imin]:
                imin=j
        temp=a[i]
        a[i]=a[imin]
        a[imin]=temp
    return a


a=list(map(int,input().split()))
n=len(a)
print(selection_sort(a,n))
