#include<stdio.h>
int main()
{
	int q,div,dis,r;
	printf("Enter a div\n");
	scanf("%d", &div);
	printf("Enter a dis\n");
	scanf("%d", &dis);
	q=div/dis;
	r=div%dis;
	printf("Qoutient = %d\n",q);
	printf("Remainder = %d\n",r);
	return 0;

}
