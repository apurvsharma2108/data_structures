# S= (n*(n+1)//2)
# S^2= (n*(n+1)*(2*n)+1)//6
def repeatedNumber(self, a):
        l=[]
        n=len(a)
        sum_n=(n*(n+1))//2  
        sum_sq=(n*(n+1)*(2*n+1))//6

        for i in range(n): #  S -(3+1+2+5+3) and s^2 = S^2-[3*3 + 1*1 + 2*2 + 5*5 + 3*3]
            sum_n-=a[i] # sum_n= sum_n-a[i]
            sum_sq-=a[i]*a[i]
        
        missing_no=((sum_n)+(sum_sq)//sum_n)//2 # this is important
        repeating_no=missing_no-sum_n

        l.append(repeating_no)
        l.append(missing_no)
        return l
a=[3,1,2,5,3]
print(repeatedNumber(a))