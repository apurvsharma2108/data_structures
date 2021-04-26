def findFloor(A, N, X):
    start = 0
    end = N - 1
    res = -1
    while (start <= end):
        mid = (start + end) // 2
        if A[mid] == X:
            res = mid
            break
        elif A[mid] < X:
            res = mid
            start = mid + 1
        else:
            end = mid - 1
    return res

a=[1,2,8,10,11,12,19]
n=len(a)
x=0
idx=findFloor(a,n,x)
if idx==-1:
    print("ele not found")
else:
    print(idx)
