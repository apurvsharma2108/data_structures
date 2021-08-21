a = [-6, -3, -1, 2, 4, 5]
a.sort()
for i in range(len(a)):
    a[i]=a[i]*a[i]
a.sort()
print(a)