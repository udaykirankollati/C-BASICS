#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d", &a, &b);// 12 12
	if(a>b) // 12>12
	{
		printf("%d is greater", a);
	}
	else if(b>a)// 12>12
	{
		printf("%d is greater", b);
	}
	else
	{
		printf("%d and %d are equal",a,b);
	}
}
