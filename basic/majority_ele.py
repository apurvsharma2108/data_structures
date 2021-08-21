def majorityElement(a):
        a.sort()
        maj=0
        if len(a)<=1:
            return 0
        for i in range(1,len(a)):
            if a[i]==a[i-1]:
                maj=a[i]
            else:
                maj=0
        return maj

a=[1]
print(majorityElement(a))