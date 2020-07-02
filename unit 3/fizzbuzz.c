#include <stdio.h>
#include <stdlib.h>
const char input [] = "fizzbuzz_1.txt";
const char output [] = "fizzbuzz_2.txt";


int main()
{

	
FILE *fb_input;
FILE *fb_output;
char line [100];
int num;

		

fb_input = fopen(input, "r");

	if(fb_input == NULL)
	{
	printf("No input file\n");
	return 8;
	}
					//Here we open the file where we gonna write
fb_output = fopen(output, "w+");

	if(fb_output == NULL)
	{
	printf("No output file\n");
	return 8;
	}

							//The while will read all the lines
	while(fgets(line, sizeof(line), fb_input))
	{
		
		sscanf(line, "%d", &num);		//With sscanf we put the line into the integer

		if(num == EOF)
			{
			break;
			}

		if(num % 3 == 0 && num % 5 == 0)		//This is the fizz buzz program
		{
		fprintf(fb_output, "\nFIZZBUZZ\n");
		}
	
		
		if(num % 3 == 0)
		{
		fprintf(fb_output, "\nFIZZ\n");
		}

		if(num % 5 == 0)
		{
		fprintf(fb_output, "\nBUZZ\n");
		}	
		else
			{
			fprintf(fb_output, "\n%d\n", num);  
			}

	}

fclose(fb_input);
fclose(fb_output);

return 0;
}