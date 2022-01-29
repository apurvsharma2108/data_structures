#https://www.interviewbit.com/problems/merge-intervals/
a=[[3,5],[7,9]]
j=[1,10]

ans,tmp=[],[]

for i in a:
    if i[1]<j[0]:
        ans.append(i)
    elif i[0]>j[1]:
        tmp.append(i)
    else:
        j[0]=min(i[0],j[0])
        j[1]=max(i[1],j[1])
ans.append(j)
for i in tmp:
    ans.append(i)
print(f"ans is {ans}")
