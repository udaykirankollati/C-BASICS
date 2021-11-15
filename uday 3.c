/* program to decode the three given numbers into output*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three number : ");
	scanf("%d%d%d",&a,&b,&c);
	printf("corresponding ASCII character for given numbers isa : %c %c %c",a+95,b+95,c+95);
}
