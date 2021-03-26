l=[]
a=list((input()))
for i in range(len(a)):
    if a[i]>='0' and a[i]<='9':
        l.append(int(a[i]))
    else:
        o2=(l[-1])
        l.pop()
        o1=(l[-1])
        l.pop()
        if a[i]=="+":
            l.append(o1+o2)
        elif a[i]=='-':
            l.append(o1-o2)
        elif a[i]=='*':
            l.append(o1*o2)
        elif a[i]=='/':
            l.append(o1//o2)
print(l[-1])


