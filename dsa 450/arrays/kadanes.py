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

# for all negative numbers
def maxSubArraySum(a,size):
     
    max_so_far =a[0]
    curr_max = a[0]
     
    for i in range(1,size):
        curr_max = max(a[i], curr_max + a[i])
        max_so_far = max(max_so_far,curr_max)
         
    return max_so_far
 
# Driver function to check the above function
a = [-2, -3, 4, -1, -2, 1, 5, -3]
print("Maximum contiguous sum is" , maxSubArraySum(a,len(a)))
 

