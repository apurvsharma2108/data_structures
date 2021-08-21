a=[2,3,4,1,5]
for i in range(0,len(a)-2):
    min_i=a[i]
    for j in range(i+1,len(a)):
        if a[j]<a[min_i]:
            min_i=a[j]
    a[i],a[min_i]=a[min_i],a[i]
print(a)             