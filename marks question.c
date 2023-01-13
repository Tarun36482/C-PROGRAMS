#include<stdio.h>
void main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d" ,&marks);
	
	if(marks<30){
		printf("C Grade\n");
		
	}
	else if(marks>=30 && marks<=70){
		printf("B Grade\n");
	}
	else if(marks>=70 && marks<90){
	
	printf("A Grade\n");
}
	else{
		printf("A++ Grade");
	}
	
}
