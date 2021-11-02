/* All arithmetic operation */
#include<stdio.h>
void main()
{ 
  int a, b, sum,difference,product,quotient;
  a=11;
  b=2;
  sum = a+b;
  difference = a-b;
  product=a*b;
  quotient=a/b;
  printf("sum of %d and %d is %d:\n",a,b,sum);
  printf("product of %d and %d is %d\n:",a,b,product);
  printf("quotient of %d and %d is %d:\n",a,b,quotient);
  printf("subtract %d and %d is%d:\n",a,b,difference);
}

