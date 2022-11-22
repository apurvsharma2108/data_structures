# logic here used is the same as bayer moore's majority element

# step 1 : intiliase ele1 , ele2 , count1 , count2
# step 2 : if at any point of time ele1 or ele2 becomes zero that ele can be a maj ele therefore if count1 or count2 == 0 initialise ele1 or ele2 as a[i] and count = 1
# step 3 : if a[i] == ele1 or a[i] == ele2 count++
# step 4 : else count-=1


a = [1,2]
n = len(a)
ele1 , ele2 = 0,0
count1 , count2 = 0,0

for i in range(len(a)):

    if count1 == 0:
        ele1 = a[i]
        count1 = 1
    
    elif count2 == 0:
        ele2 = a[i]
        count2 = 1
    
    elif a[i] == ele1:
        count1+=1
    
    elif a[i] == ele2:
        count2+=1
    
    else:
        count1-=1
        count2-=1

num1 , num2 = 0,0

for i in range(len(a)):
    
    if a[i] == ele1:
        num1+=1
    
    if a[i] == ele2:
        num2+=1

if num1>n//3:
    print(ele1)
if num2>n//3:
    print(ele2)
