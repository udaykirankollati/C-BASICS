#include<stdio.h>
void main()
{
	int day;
	printf("enter a week day");
	scanf("%d",& day);
	if(day==1)
	{
		printf("monday");
	}
	else if(day==2)
	{
		printf("tuesday");
	}
	else if(day==3)
	{
		printf("wednesday");
	}
	else if(day==4)
	{
		printf("thursday");
	}
	else if(day==5)
	{
		printf("friday");
	}
	else if(day==6)
	{
		printf("saturday");
	}
	else
	{
	printf("input invalid");
    }
}
    
