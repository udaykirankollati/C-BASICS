#include<stdio.h>
int main()
{
	int n,r,sum=0,temp;
	printf("enter number:");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	if(sum==temp)
	{
	printf("%d is armstrong",n);
	}
	else
	{
	printf("%d is armstrong",r);	
	}
	return 0;
}
