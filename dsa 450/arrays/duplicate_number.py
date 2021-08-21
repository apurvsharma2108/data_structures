def duplicate(self,a):
    if len(a)>1:
            slow=a[0]
            fast=a[a[0]]
            while(slow!=fast):
                slow=a[slow]
                fast=a[a[fast]]  

# this step is done to check for cycle 

#now that we have known that there is a cycle we find the dupllicate number by entering into cycle 
            fast=a[0]
            while(slow!=fast):
                slow=a[slow]
                fast=a[fast]
            
            return fast
    return -1
