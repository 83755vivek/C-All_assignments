/*5. Write a program to find maximum of three numbers using
a. If – else*/



#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter num : ");
	scanf("%d",&n1);

	printf("Enter num : ");
	scanf("%d",&n2);

	printf("Enter num : ");
	scanf("%d",&n3);

   
	if( n1 > n2 )
	{
	   
		if( n1 > n3)
			printf("Num1 is Grater : %d\n",n1);
		else
			printf("Num3 is Grater : %d\n",n3);
	}
	else
	{
		if(n2 > n3)
		{
			printf("Num2 is Grater : %d\n",n2);
		}
		else
		{
			printf("Num3 is Grater : %d\n",n3);
		}
	}

	return 0;
}
