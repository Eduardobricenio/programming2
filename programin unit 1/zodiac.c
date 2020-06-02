// Write a program that display the Zodiacal Sign using the day and month of birth.

 
#include <stdio.h>   //libraries are imported
#include <math.h>    // //libraries are imported

int main() 
{
int m,d = 0;   //here the variables are declared

printf("write your month of birth: ");
scanf("%d",&m);  
 
while ((m > 12) || (m < 1)) 
{
printf("write your month of birth( 1 - 12): ");
scanf("%d",&m);
}

if (m==1)
{
printf("write your day of birth (1-31): ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth (1-31): ");
scanf("%d",&d);
}
if(d<=20)  printf("\nhis sign is capricorn.\n\n");
else printf("\nhis sign is aquarium.\n\n");
}

else if(m==2)
{
printf("write your day of birth (1-31) ");
scanf("%d",&d);
while ( (d>29) || (d<1) )
{
printf("write your day( 1 - 29): ");
scanf("%d",&d);
}
if (d<=19)  printf("\nhis sign is aquarium.\n\n");
else printf("\nhis sign is pisces.\n\n");
}

else if(m==3)
{
printf("write your day of birth ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day( 1 - 31): ");
scanf("%d",&d);
}
if (d<=20)  printf("\nhis sign is Pisces.\n\n");
else printf("\nyour sign is  ARIES.\n\n");
}

else if(m==4)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>30) || (d<1) )
{
printf("write your day of birth(1 - 30): ");
scanf("%d",&d);
}
if (d<=20) printf("\nyour sign is  ARIES\n\n");
else printf("\nyour sign is  TAURUS.\n\n");
}

else if(m==5)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth( 1 - 31): ");
scanf("%d",&d);
}
if (d<=21)  printf("\nyour sign is  TAURUS.\n\n");
else printf("\nyour sign is GEMINI.\n\n");
}

else if(m==6)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>30) || (d<1) )
{
printf("write your day of birth( 1 - 30): ");
scanf("%d",&d);
}
if (d<=21)  printf("\nyour sign is GEMINI.\n\n");
else printf("\nyour sign is CANCER.\n\n");
}

else if(m==7)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth( 1  31): ");
scanf("%d",&d);
}
if(d<=23)  printf("\nyour sign is CANCER.\n\n");
else printf("\nyour sign is  LEO.\n\n");
}

else if(m==8)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth( 1 -31): ");
scanf("%d",&d);
}

(d<=23) ? printf("\nyour sign is LEO.\n\n"):
          printf("\nyour sign is virgo.\n\n");
}

else if(m==9)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>30) || (d<1) )
{
printf("write your day of birth( 1 -30): ");
scanf("%d",&d);
}

if(d<=23)  printf("\nyour sign is LEO.\n\n");
else printf("\nyour sign is pound.\n\n");
}

else if(m==10)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth(1 - 31): ");
scanf("%d",&d);
}

if(d<=23)  printf("\nyour sign is pound.\n\n");
else printf("\nyour sign is SCORPION.\n\n");
}

else if(m==11)
{
printf("write your day of birth: ");
scanf("%d",&d);
while ( (d>30) || (d<1) )
{
printf("write your day of birth(1 -30): ");
scanf("%d",&d);
}

if(d<=22)  printf("\nSu signo es SCORPION.\n\n");
else printf("\nSu signo es Sagittarius.\n\n");
}

else if(m==12)
{
printf("write your day of birth ");
scanf("%d",&d);
while ( (d>31) || (d<1) )
{
printf("write your day of birth( 1 - 31): ");
scanf("%d",&d);
}

if(d<=21)  printf("\n your singn is Sagittarius.\n\n");
else printf("\nyour sign is capricorn.\n\n");
}

return 0;

}