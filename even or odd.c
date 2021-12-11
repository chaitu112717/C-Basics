#include<stdio.h>
void main()
{
	int number;
	printf("enter your number");
	scanf("%d", &number);
	if(number%2==0)
	{
		printf("your number is even number");
	}
	else
	{
		printf("your number is odd number");
	}
}
