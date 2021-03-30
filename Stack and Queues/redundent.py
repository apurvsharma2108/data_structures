a=[]
s=list(input())
ans=False
for i in range(len(s)):
    if s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/':
        a.append(s[i])
    elif s[i]=='(':
        a.append(s[i])
    elif s[i]==')':
        if a[-1]=='(':
            ans=True
        while(a[-1]=='+' or a[-1]=='-' or a[-1]=='*' or a[-1]=='/'):
            a.pop()
        a.pop()
print(ans)
