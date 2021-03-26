ol=['{','[','(']
cl=['}',']',')']
a=list(input())
s=[]
flag=0
for i in range(len(a)):
    if a[i] in ol:
        s.append(a[i])
    elif a[0]==')' or a[0]==']' or a[0]=='}':
        flag=1
        break
    elif a[i] in cl:
        pos=cl.index(a[i])
        if len(a)>0 and ol[pos]==s[len(s)-1]:
            s.pop()
        else:
            flag=1
            break
if len(s)==0 and flag==0:
    print("Balanced")
else:
    print("Unbalanced")
