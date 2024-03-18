/*1. Write a program to accept two numbers and display division of the two numbers. Check for
divide by zero error. If divider is zero then display appropriate error message.*/



#include<stdio.h>

int main()
{

float n1, n2, res;

printf("Enter the first number : ");
scanf("%f", &n1);

printf("Enter the second number : ");
scanf("%f", &n2);

if(n2 == 0)

	{
	printf("Error : Division error \n");
	}

else
   {
   res = n1 /n2;
   printf("result = %f\n", res);
   }
return 0;

}
