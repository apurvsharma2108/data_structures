a=[7,2,4,1,5,3]

for i in range(1,len(a)):
    value=a[i]
    hole=i

    while(hole>0 and a[hole-1]>value):
        a[hole]=a[hole-1]
        hole-=1
    a[hole]=value
print(a)

# best case time complexity O(n) 
# input already sorted no comparison 

#worst case t.c O(n^2)
# reverse sorted