#include<stdio.h>
void main()
{
	int number;
	printf("Enter your number");
	scanf("%d", &number);
	if(number==1)
	{
		printf("monday");
	}
	else if(number==2)
	{
		printf("Tuesday");
	}
	else if(number==3)
	{
		printf("Wednesday");
	}
	else if(number==4)
	{
		printf("Thrisday");
	}
	else if(number==5)
	{
		printf("Friday");
	}
	else if(number==6)
	{
		printf("Saturday");
	}
	else if(number==7)
	{
		printf("sunday");
	}
	else
	{
		printf("invalid number");
	}
}

