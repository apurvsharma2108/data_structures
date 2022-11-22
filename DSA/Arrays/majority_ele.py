a = [7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5]

# the logic here is simple at any given point of time in 1 part of the array either prefix or suffix will cancel out each other ie (MAJ == MIN)
# and the other part will contain majority > minority  

# step 1 -> intialise count and ele as 0,0
# step 2 -> if count == 0 intialise a[i] as ele because this can be the majority element
# step 3 -> elif ele == a[i] count ++ 
# step 4 -> else count-=1 because it's not the majority ele therefore -1

count , ele = 0 , 0

for i in range(len(a)):

    if count == 0:
        ele = a[i]
    
    if ele == a[i]:
        count+=1
    
    else:
        count-=1

print(ele)

