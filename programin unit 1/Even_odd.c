#include <stdio.h>
int main()
{
    int num1, n1;
 //Solo pide el entero
    printf("Ingresa un entero : ");
    scanf("%d", &num1);
    n1 = num1 % 2;
    //Comprueba el numero pedido 
    if (n1 == 0)
        printf("%d is an even integer\n", num1);
    else
        printf("%d is an odd integer\n", num1);
}



