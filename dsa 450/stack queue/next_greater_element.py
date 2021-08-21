# brute force
# nge=[]
# for (i (0->n-1)):
#   for(j (i+1->n-1)):
#       if(a[j]>a[i])
#           nge[i]=a[j]
#               break
def next_greater(a):
    n=len(a)
    new_array=[-1]*n
    st=[]

    for i in reversed(range(0,(2*n)-1)):
        while (len(st)!=0 and st[-1]<=a[i%n]):
            st.pop()
        if(i<n):
            if(len(st)!=0):
                new_array[i]=st[-1] #st.top()
        st.append(a[i%n])
    return new_array


a=[4,12,5,3,1,2,5,3,1,2,4,6]
print(next_greater(a))