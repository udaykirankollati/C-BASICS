#include<stdio.h>
void main()
{
	//vaiable declaration
	int phy,che,mat,eng,tot;
	//initialization
	phy = 50;
	che = 60;
	
	eng = 40;
	// Calculation
	tot = phy+che+mat+eng;
	// Output
	printf("marks in physics:% d\n",phy);
	printf("marks in chemistry:% d\n",che);
	printf("marks in english:% d\n",eng);
	printf("total marks: %d",tot);
}
