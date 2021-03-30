from collections import deque
def printmax(a,n,k):
    q=deque()
    for i in range(k):
        while(q and a[i]>=a[q[-1]]  ):                    # For every element, the previous smaller elements are useless so remove them from Qi
            q.pop()
        q.append(i)
    for i in range(k,n):
        print(str(a[q[0]]) + " ", end="")

        while(q and q[0]<=i-k):                             # Remove the elements which are out of this window
            q.popleft()                                    # Remove all elements smaller than the currently being added element (Remove useless elements)
        while q and a[i] >= a[q[-1]]:
            q.pop()
        q.append(i)
    print(str(a[q[0]])+ " ",end=" ")

if __name__=="__main__":
    a=[12, 1, 78, 90, 57, 89, 56]
    k=3
    printmax(a,len(a),k)
