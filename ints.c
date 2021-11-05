#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned: %hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned: %d to %hu\n", 0, USHRT_MAX);
	printf("Int:\nsigned: %d to %d\n", INT_MIN, INT_MAX);
	printf("unsigned: %d to %u\n", 0, UINT_MAX);
	printf("long int: \nsigned: %ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned: %d to %lu\n", 0, ULONG_MAX);
	printf("Long-long int: \nsigned: %lld to %lld\n", LLONG_MAX, LLONG_MAX);
	printf("unsigned: %d to %llu", 0, ULLONG_MAX);
}
