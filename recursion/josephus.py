def jos(n,k):
    if(n==1):
        return 0
    return (jos(n-1,k)+k)%n
n,k=list(map(int,input().split()))
print(n)
print(k)
print("the winner is " , jos(n,k))