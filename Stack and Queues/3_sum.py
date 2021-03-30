a=list(map(int,input().split()))
s=int(input())
a.sort()
res=False
for i in range(0,len(a)-2):
    l=i+1
    r=len(a)-1
    while(l<r):
        if a[i]+a[l]+a[r]==s:
            res=True
            print(a[i],a[l],a[r])
            break
        elif a[i]+a[l]+a[r]<s:
            l+=1
        else:
            r-=1
if res==False:
    print("No  sum found")

