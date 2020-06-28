#include <stdio.h>
#include <stdlib.h>

const char multipli_in [] = "multipli_1.txt";
const char multipli_out[] = "multipli_2.txt";

int main() 
{

FILE *numberslist;
FILE *result;

char line [200];
int num;
int num2;
int multiplication;


numberslist = fopen(multipli_in, "r");
	if(numberslist == NULL)
	{
	printf(" warning Impossible\n");
	return 8;
	}

result = fopen(multipli_out, "w+");
	if(result == NULL)
	{
	printf("Not possible\n");
	return 8;
	}


while(feof(numberslist)==0)
{

fscanf(numberslist, "%d %d", &num, &num2);

multiplication = num*num2;

fprintf(result, "%d\n", multiplication);

}



fclose(numberslist);
fclose(result);

return 0;
}