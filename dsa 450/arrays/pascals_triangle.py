def genrate(a):
        pascal=[]
        for i in range(a):
            pascal.append([1]*(i+1))  # [[1], [1, 1], [1, 1, 1], [1, 1, 1, 1], [1, 1, 1, 1, 1]]
        for i in range(a):
            for j in range(1,a):
                pascal[i][j]=pascal[i-1][j]+pascal[i-1][j-1] #[i-1] [j] and [i][j-1]
        return pascal

a=5
print(genrate(5))