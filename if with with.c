#include<stdio.h>
void main()
{
	int number;
	printf("enter the number:");
	scanf("%d" ,&number);
	
	if(number>=0){
		printf("positive\n");
		if(number%2==0){
			printf("even\n");
		}
	else{
		printf("odd\n");
	}
	}
}
