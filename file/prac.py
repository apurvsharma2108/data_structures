# def writeMode(filename):
#     try:
#         with open(filename,"a") as f:
#             f.write(str(filename))
#     except FileNotFoundError as e:
#         print(f" File {filename} not found ")
        
# a=10
# table=[a*i for i in range(1,11)]
# with open("ans.txt","a") as f:
#             f.write(str(table))

# ----------------------------------------
# lambda functions
ans=lambda x: x*x*x 
print(ans(2))
a,b=list(map(int,input().split()))  