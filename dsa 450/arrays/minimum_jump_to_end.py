def minJumps(a, n):
    max_reach=a[0]
    step=a[0]
    jump=1
    if a[0]==0:
        return -1
    elif n==1:
        return 0
    else:
        for i in range(1,len(a)):
                    
            if i==n-1:
                return jump 
            max_reach=max(max_reach,i+a[i]) # we calculate the maximum jump we can take from a[i] and store it in max reach
            step-=1 #since we move forward 1 step we reduce step by 1
            if step==0:
                
                step=max_reach-i #from this value how far we will go we store it in max reach
                jump+=1 #since step is 0 therefore we have to makee a jump
                        
                if step==0:# 2103 cannot reach end
                    return -1



a=[1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]
print(minJumps(a,len(a)))