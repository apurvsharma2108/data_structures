a=list(map(int, input().split()))
if len(a)%2==0:
    mx=max(a[0],a[1])# maximum number of a[0] and a[1]
    mn=min(a[0],a[1])# same for minimum
    i=2 # it is done for checking from a[2] because 0,1 is already done
else:
    mx,mn=a[0],a[0]
    i=1

for i in range(len(a)-1):
    mx=max(mx,a[i],a[i+1])
    mn=min(mn,a[i],a[i+1])
    i+=2 # i+=2 is done in order to check for max min with minimum jump therefore 2 jumps will be taken

print(mx,mn)
