#include<stdio.h>
 int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\nThe number is positive");
	}
	else if(a<0)
	{
		printf("\nThe number is Negative");
	}
	else
	{
		printf("\n the number is zero");
	}
	return 0;
}
