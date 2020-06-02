#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
	int jugador,computadora; //Son las variables
	srand(time(NULL));//Esto es la variable que escogera un numero aleatorio
	printf("Escoge entre las diferentes opciones\n");
    printf("Escoge:\n1 para piedra, \n2 para papel, and \n3 para tijeras\n");
    scanf("%d", &jugador);//Esta pidiendo el numero al jugador
 
    computadora=rand()%3+1;//Aqui la computadora escoge un numero entre el 1 y el 3
    printf("La computadora escogio %d\n", computadora);
	
	
    if(jugador==3&&computadora==2 || jugador==2&&computadora==1 || jugador==1&&computadora==3){ //Casos por si gana el jugador
	printf("Ganaste amiguito(a)");}
    else if(jugador==1&&computadora==2 || jugador==2&&computadora==3 || jugador==3&&computadora==1){ //Casos por si gana la computadora
	printf("Perdiste, nos dominaran las computadoras :( )");}
    else if(jugador==1&&computadora==1 || jugador==2&&computadora==2 || jugador==3&&computadora==3){ //Casos para empate
	printf("Empate");}
 
    return 0;
}
