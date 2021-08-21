l=int(input())
a=list(map(int,input().split()))
c0 ,c1 ,c2=0,0,0
for i in range(len(a)):
    if a[i]==0:
        c0+=1
    elif a[i]==1:
        c1+=1
    else:
        c2+=1

count=0

for i in range(c0):
    a[count]=0
    count+=1

for i in range(c1):
    a[count]=1
    count+=1

for i in range(c2):
    a[count]=2
    count+=1

print(a)
