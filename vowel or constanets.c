#include<stdio.h>
int main()
{
	char c;
	int a,b;
	printf("Enter an alphabet\n");
	scanf("%c", &c);
	a = (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
	b = (c=='A') || (c=='E') || (c=='I') || (c=='O') || (c=='U');
	if (a||b)
	printf("your alphabet is vowel %c");
	else
	printf("your alphabet is constants %c");
	return 0;
}
