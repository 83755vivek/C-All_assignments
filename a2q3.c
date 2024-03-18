//3. Write a program to accept number and check whether the number is +ve, -ve and zero.



#include<stdio.h>

int main()

{

float n1;

printf("Enter the number :");
scanf("%f", &n1);

if(n1 > 0)
{
printf("Number is positive\n");
}

else if(n1 < 0)
{
printf("Number is negative\n");
}

else

{
printf("NUmber is zero\n");

}

return 0;

}
