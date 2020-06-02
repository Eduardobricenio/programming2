#include<stdio.h>
#include<stdlib.h>

int main(){
	int a, b, c, max, min;
	
	printf("Escriba el primer numero: ");
	scanf("%i",&a);
	printf("Escriba el segundo numero: ");
	scanf("%i", &b);
	printf("Escriba el tercer numero: ");
	scanf("%i", &c);
	
	if(a>b){ // Estos condicionales determinara si a es el mayor de los 3, en caso de que sea asi, se convierte en "max"
		if(a>c){
			max=a;
		}
		else{
			max=c; // En caso que dectecte que c>a, automaticamente c se convierte en max, porque ya paso por la comprobacion de a>b
		}
		
	}
	else{
		if(b>c){ // Se comprueba el segundo caso, el cual solo queda b y c, si se cumple la condicional b=max, sino, c=max
			max=b;
		}
		else{
			max=c;
		}
	}
	
	
	printf("El mayor de los tres numeros es: %i \n", max); //Se imprime el resultado
	
	return 0;
}
