n,m=8,5
a=[3, 4, 1, 9, 56, 7, 9, 12]
a.sort()
min_diff=a[n-1]-a[0]
for i in range(0,len(a)-m+1): # because we need check maximum minimum differnence form 0,1,2,....len(a)-m+1 only
    min_diff=min(min_diff,a[i-m+1]-a[i])#a[i-m+1] is the the max value of that subarray from behind
print(min_diff)

#sort the array
# run loop form 0 to m because we only want to look for maximium minimum differnence of a subarray
# check the difference of the subarray