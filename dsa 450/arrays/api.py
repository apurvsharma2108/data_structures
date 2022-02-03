def merge(a):
    if len(a)>1:
        mid=len(a)//2

        l=a[:mid]
        r=a[mid:]

        merge(l)
        merge(r)

        i,j,k=0,0,0

        while(i<len(l) and j<len(r)):
            if l[i]<r[j]:
                a[k]=l[i]
                i+=1
            else:
                a[k]=r[j]
                j+=1
            k+=1
        while(i<len(l)):
            a[k]=l[i]
            k+=1
            i+=1
        while(j<len(r)):
            a[k]=r[j]
            k+=1
            j+=1

def printlist(a):
    for i in range(len(a)):
        print(a[i],end=" ")


a=[12, 11, 13, 5, 6, 7]
printlist(a)
merge(a)
printlist(a)