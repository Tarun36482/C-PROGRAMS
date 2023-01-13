#include<stdio.h>
#include<stdio.h>

int main()
{
	int b,p;
	printf("Enter the base: ");
	scanf("%d",&b);
	printf("Enter the power: ");
	scanf("%d",&p);
	
	int power=pow(b,p);
	
	printf("The power of the  number is:%d",power);
	return 0;
}
