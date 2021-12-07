#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter the number");
	scanf("%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("%d is the larger",a);
	}
	else if(b>a && b>c && b>d)
	{
		printf("%d is the larger",b);
	}
	else if(c>a && c>b && c>d)
	{
		printf("%d is the larger",c);
	}
	else if(d>a && d>b && d>c)
	{
		printf("%d is the larger",d);
	}
}
