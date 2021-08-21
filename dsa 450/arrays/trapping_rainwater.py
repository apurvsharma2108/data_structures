def trappingWater(a,n):
        l_max,r_max=a[0],a[len(a)-1]
        l=[]
        r=[]
        ans=[]
        
        for i in range(len(a)): #we caluclate the maxheight till now from left
            l_max=max(l_max,a[i])
            l.append(l_max)
        
        
        for i in reversed(range(len(a))): #we calculate the maxheight till now from right
            r_max=max(r_max,a[i])
            r.append(r_max)
        r.reverse()# this is important
        
        for i in range(len(a)):
            ans.append(min(l[i],r[i])-a[i]) #using this formula we calulate the trapping rainwater at that point
        
        print(l)
        print(r)
        return(sum(ans))

a=[3,1,2,4,0,1,3,2]
n=6
print(trappingWater(a, n))