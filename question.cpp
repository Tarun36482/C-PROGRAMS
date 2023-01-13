#include<stdio.h>
void main()
{
	int marks;                  
	printf("enter the marks:");
	scanf("%d" ,&marks);
	
	if(marks>=0 && marks<=30){ 
		printf("FAIL\n");
		
	}
	else if(marks>30 && marks<=90){
		printf("Pass\n");
	}
	else{
		printf("you are restigated\n");
	}
	
	
	
}
