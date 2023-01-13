#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age: ");
	scanf("%d\n",&age);
	
	if(age>=21){
		printf("you are adult" ,age);
	}
	
	else
	printf("you are child",age);
	return 0;
}

