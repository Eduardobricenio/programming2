matrixa = [[12,7,3],
        [4 ,5,6],
        [7 ,8,9]]
matrixb = [[5,8,1],
        [6,7,3],
        [4,5,9]]

res = [[0 for a in range(3)] for b in range(3)]

# explicit for loops
for i in range(len(matrixa)):
    for j in range(len(matrixb[0])):
        for k in range(len(matrixb)):
            # resulted matrix
            res[i][j] += matrixa[i][k] * matrixb[k][j]

print (res)
