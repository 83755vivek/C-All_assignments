//6. Write a program to accept a 5 digit number and check whether it is a numeric palindrome. (If
//reversed number is same as entered number it is called palindrome).




#include<stdio.h>
int main()
{


int n,r,sum=0,temp;


printf("Enter the number=");
scanf("%d",&n);
temp=n;

while(n>0)
	{
	r=n%10;
	sum=(sum*10)+r;
	n=n/10;
	}
if(temp==sum)
	printf("palindrome number ");
else
	printf("not palindrome");
return 0;
}
