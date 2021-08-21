def reverse(a):
        if a<0:
            
            b=(str(a)[::-1])
            b=b*(-1)

        return(str(a)[::-1])
a=-1234567891
print(reverse(a))