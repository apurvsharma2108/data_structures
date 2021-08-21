#An array contains both positive and negative numbers in random order. 
# Rearrange the array elements so that all negative numbers appear before all positive numbers.

# Input: -12, 11, -13, -5, 6, -7, 5, -3, -6
#Technique used is 2 pointer using left and right pointer

a= [-12, 11, -13, -5, 6, -7, 5, -3, -6]

l=0
r=len(a)-1
while(l<=r):
    if a[l]<0 and a[r]<0: # because negative element is correct position
        l+=1
    elif a[l]>0 and a[r]<0:# we need to swap
        a[l],a[r]=a[r],a[l]
        l+=1
        r-=1
    elif a[l]>0 and a[r]>0:
        r-=1
    else:
        l+=1
        r-=1
print(a)