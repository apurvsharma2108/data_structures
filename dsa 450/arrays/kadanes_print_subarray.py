a = [5,0,1,-1,-2,-5,-4,-6]
 
max_sum , curr_sum = -9999999-1,0
start,end,potential_start = 0,0,0
        
for i in range(len(a)):
            
    curr_sum += a[i]
            
    if (curr_sum > max_sum):
        max_sum = curr_sum
        end = i
        start=potential_start
            
    if curr_sum < 0:
        curr_sum = 0    
        potential_start=i+1
        

print(end)
print(start)
print(start)
print(a[start:end+1])   