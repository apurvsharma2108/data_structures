def pali(a,l,r):
    if l>=r:
        return True
    if a[l]!=a[r]:
        return False
    return pali(a,l+1,r-1)


a=list(input())
print(pali(a,0,len(a)-1))