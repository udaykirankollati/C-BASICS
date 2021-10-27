#include<stdio.h>
#include<limits.h>
int main()
{
	// for short int
	printf("short int : \nSigned: %d to %hd",SHRT_MIN, SHRT_MAX);
	printf("Unsigned : %d to %hu",0, SHRT_MAX);
	// for int
	printf("int:\n signed : %d to d%",INT_MIN, INT_MAX);
	printf("Unsigned : %d to %u", 0, INT_MAX);
	// for long int
	printf("long int :\n signed: %d to 1%d",LONG_MIN,LONG_MAX);
	printf("Unsigned : %d to 1u%",0, LONG_MAX);
}

