// to print the multiply of three numbers
// using scanf function
#include <stdio.h>
int main()
{
	int a,b,c,result;
	printf("enter the value of a: ");
	scanf("%d",&a);

	printf("enter the value of b: ");
	scanf("%d",&b);

	printf("enter the value of c: ");
	scanf("%d",&c);

	result=a*b*c;

	printf("the value of %d and %d and %d is: %d",a,b,c,result);
	return 0;
}

