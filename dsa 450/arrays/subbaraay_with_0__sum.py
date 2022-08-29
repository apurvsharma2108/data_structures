# arr[] = {1, 4, -2, -2, 5, -4, 3}
# Prefix sum_till_is for above array are:
# 1, 5, 3, 1, 6, 2, 5
# Since prefix sum_till_i 1 repeats, we have a subarray
# with 0 sum_till_i. 

def subArrayExists(a,n):
        n=set() # we store all the prefix sum_till_i in a set and check
        sum_till_i=0
        for i in range(len(a)):
            sum_till_i+=a[i]
            if sum_till_i==0 or sum_till_i in n:
                return True
            else:
                n.add(sum_till_i)
        return False

a=[1,4,-2,2,5,-4,3]
print(subArrayExists(a, len(a)))