#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d\n" ,&a);
	
	printf("Enter the value of b: ");
	scanf("%d\n" ,&b);
	a=a+b;
	a+=b;
	a-=b;
	printf("%d\n" ,a);
	printf("%d\n" ,a);
	printf("%d\n" ,a);
	return 0;
	
	
}
