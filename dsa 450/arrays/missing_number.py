a=[-10,3,4,5,1]
n=len(a)
for i in range(n):
    correct_position=a[i]-1 # we store the correct position of the element in correct position
    while(1 <= a[i] <= n  and a[correct_position]!=a[i]):# we are omly intrested till n lentght elements 
        a[correct_position],a[i]=a[i],a[correct_position] # we swap the element at correct position and a[i]
        correct_position=a[i]-1 # this will store new correct position of number  # now a[i] has changed
for i in range(n):
    if a[i]!=i+1:
        print(i+1)


