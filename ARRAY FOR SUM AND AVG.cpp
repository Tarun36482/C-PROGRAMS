#include<stdio.h>
int main()
{
	  int i, marks[5];
	float sum=0,avg;
	printf("Enter the marks: ");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++){
		sum+=marks[i];
	}
	avg=sum/5;
	
	printf("The sum of the elements is %f\n",sum);
	printf("The avg of the elements is %f",avg);
	return 0;
}
