def bubble_sort(a,n):
    for i in range(n):
        flag=0
        for j in range(0,n-i-1):
            if a[j]>a[j+1]:
                temp=a[j]
                a[j]=a[j+1]
                a[j+1]=temp
                flag=1
        if flag==0:
            break
    return a


a=list(map(int,input().split()))
n=len(a)
print(bubble_sort(a,n))
