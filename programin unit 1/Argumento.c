#include <stdio.h>
int main()  
{  
    char argumento;  

    printf("Input a character: ");  
    scanf("%c", &argumento);  
  
    /* Checa si es una letra del abecedario*/  
    if((argumento>='a' && argumento<='z') || (argumento>='A' && argumento<='Z'))  
    {  
        printf("Es una letra\n");}  
    else if(argumento>='0' && argumento<='9') /* si es un digito */  
    {  
        printf("Es un digito\n");}  
    else /* Sino es ninguno de los anteriores casos, es un caracter especial */  
    {  
        printf("Es un caracter especial.\n");}  
return 0; 
}
