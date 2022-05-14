#include<stdio.h>
int main()
{
	int num,b,i;
	printf("enter a number");
	scanf("%d", &num);
	while(i<=10)
	{
	b=i*num;
	printf("%d\n",b);
    i=i+1;
    }
}
