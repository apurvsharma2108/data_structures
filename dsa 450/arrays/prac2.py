a=[2,7,9,1,10,5,6,8]
# a=[6,5,43,3,1]
n=len(a) 
largest=a[n-1]
for i in reversed(range(len(a))):
    largest=max(largest,a[i])
print(largest)

