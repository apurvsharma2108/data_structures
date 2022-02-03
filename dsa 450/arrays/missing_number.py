def firstMissingPositive(a):
        n=len(a)
        containsOne=False
        
        if n==0 : #base conditon
            return 1
        # step 1 : make all the numbers<0 and >n to 0 and check for ones in array
        
        for i in range(len(a)):
            
            if a[i]==1: # check for one in array
                containsOne=True
            
            elif a[i]<=0 or a[i]>n:
                a[i]=1
        #step 2 if contains one ==False return 1
        
        if containsOne==False:
            return 1
        
        #step 3 cla
        for i in range(len(a)):
            index=abs(a[i])-1
            
            if a[index]>0:
                a[index]=-1*a[index]
        
        for i in range(len(a)):
            if a[i]>0:
                return i+1
        return n+1
        
a=[7,8,9,11,12]
print(firstMissingPositive(a))