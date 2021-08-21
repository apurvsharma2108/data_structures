# properties:
# 1 it is divide and conquer
# 2 recursive
# 3 it is not stable sorting algo
# 4 T.C O(n logn) best case
    #   worst case O(n^2) if array is already sorted
# 5 
def partition(a,start,end):
    pivot=a[end]
    p_index=start#partiton index
    for i in range(start,end):
        if a[i]<=pivot:
            a[i],a[p_index]=a[p_index],a[i]
            p_index+=1
    a[p_index],a[end]=a[end],a[p_index]
    return p_index

def quicksort(a,start,end):
    if start<end:
        p_index=partition(a,start,end)
        quicksort(a, start, p_index-1)
        quicksort(a, p_index+1, end)


a=[0,7,6,5,4,3,2,1]
n=len(a)
quicksort(a, 0, 7)
print(a)