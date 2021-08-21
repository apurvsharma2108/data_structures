n=int(input())
a=list(map(int, input().split()))
curr_sum,max_sum=0,-9999999 - 1
for i in range(len(a)):
    curr_sum+=a[i]
    if curr_sum>max_sum:
        max_sum=curr_sum
    if curr_sum<0:
        curr_sum=0
print(max_sum)
