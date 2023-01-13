#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter the array element:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
		}
		for(i=4;i>=0;i--){
			printf(" Array elements at index %d is: %d\n",i,a[i]);
		}
		return 0;
}
