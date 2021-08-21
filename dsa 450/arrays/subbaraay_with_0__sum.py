# arr[] = {1, 4, -2, -2, 5, -4, 3}
# Prefix sums for above array are:
# 1, 5, 3, 1, 6, 2, 5
# Since prefix sum 1 repeats, we have a subarray
# with 0 sum. 

def subArrayExists(a,n):
        n=set() # we store all the prefix sum in a set and check
        summ=0
        for i in range(len(a)):
            summ+=a[i]
            if summ==0 or summ in n:
                return True
            else:
                n.add(summ)
        return False

a=[1,4,-2,2,5,-4,3]
print(subArrayExists(a, len(a)))