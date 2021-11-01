def ans(a):
    cand=maj(a)
    if check(cand,a)==True:
        print(cand)
    else:
        print("No maj element")


def maj(a):
    maj_ind=0
    count=1
    for i in range(0,len(a)):
        if a[maj_ind]==a[i]:
            count+=1
        else:
            count-=1
        if count==0:
            maj_ind=i 
            count=1
    return a[maj_ind]

def check(cand,a):
    count=0
    for i in range(len(a)):
        if cand==a[i]:
            count+=1
    if count>len(a)//2:
        return True 
    else:
        return False



a=[5,1,4,4,5]
ans(a)