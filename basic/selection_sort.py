a=[64, 34, 25, 12, 22, 11, 90,1,2,100,19]

for i in range(len(a)):
    for j in range(i+1,len(a)):
        if a[j]<a[i]:
            a[j],a[i]=a[i],a[j]
print(a)
