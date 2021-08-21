a=[64, 34, 25, 12, 22, 11, 90]

for i in range(len(a)):
    swapped=False
    for j in range(0,len(a)-i-1):
        if  a[j]>a[j+1]:
            a[j],a[j+1]=a[j+1],a[j]
            swapped=True
    if swapped==False:      #advanced bubble sort
        break

print(a)    