# the logic here used is array preprocessing at any given time I'll pick the minimum element moving forward and subtract it wth it's ahead largest ele. 
# curr = min(curr , a[i]) checks the minimum stock moving forward(preprocesssing) 
# maxx = max(maxx , a[i]-curr)  checks the maximum difference b/w  largest and smallest

a = [7,1,5,3,6,4]

maxx , curr = -9999999-1 , a[0]

for i in range(len(a)):
    
    curr = min(curr , a[i])

    maxx = max(maxx , a[i]-curr)

print (maxx)