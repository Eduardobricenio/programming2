import  numpy as np
 
n = int(input('Ingrese numero de n para matriz nxn: '))
print('')
 
matriz = np.zeros([n,n],int)
 
#print('Matriz vacia \n',matriz,'\n')
 
for i in range(n):
    for j in range(n):
 
        print('Ingrese el dato',(i,j))
        matriz[i][j] = int(input(''))
 
print('')
print('Matriz llena \n',matriz,'\n')
 
matrizfinal = np.zeros([n,n],int)
 
for i in range(n-1):
 
    vector = matriz[i:,i:].tolist()
    #print('Matriz a vector sin ordenar\n',vector)
    vector.sort(reverse=-1)
    #print('Matriz a vector ordenado \n',vector)
    matriz = np.array(vector)
    matrizfinal[i:,i:] = matriz
    #print('Vector a matriz ordenado \n',matriz)
    matriz[0,1:] = 0
    #print('Matriz sustituida \n',matriz)
    matrizfinal[i,i+1:] = 0
    if i>= 1 and matrizfinal[i,i-1] > matrizfinal[i+1,i-1]:
        matrizfinal[i,i-1],matrizfinal[i+1,i-1]=matrizfinal[i+1,i-1],matrizfinal[i,i-1]
print("matriz final \n",matrizfinal)