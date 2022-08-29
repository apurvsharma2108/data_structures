def next(a):
        inverse_point=len(a)-2 # first we calculate the inverse point from where we have to swap ie the pivot point 
        while(inverse_point>=0 and a[inverse_point]>=a[inverse_point+1]): # we do this because we need to find the pivot 
            #point ie the top point
            inverse_point-=1
        
        
        if inverse_point<0:
            return a.sort()
        #now we swap the pivot element and the largest element from remaning array from reverse

        for i in reversed(range(len(a))):
            if a[i]>a[inverse_point]:
                a[i],a[inverse_point]=a[inverse_point],a[i]
                break #break is important because we only need 1st element
        #now we do swapping
        a[inverse_point+1:]=reversed(a[inverse_point+1:])
        return a


a=[9,1,2,4,3,1,0] # next permutation : [9,1,3,0,1,2,4]
print(next(a))
# link to video https://www.youtube.com/watch?v=zGQq3HGBTXg
