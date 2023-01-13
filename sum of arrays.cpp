#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],sumarr[5];
	int i;
	printf("Enter the first array element");
	for(i=0;i<5;i++){
		scanf("%d\n",&arr1[i]);
	}
	printf("Enter the second array element");
	for(i=0;i<5;i++){
		scanf("%d\n",&arr2[i]);
	}
	for(i=0;i<5;i++){
		sumarr[i]=arr1[i]+arr2[i];
		printf("The third array element at index %d is:%d\n",i,sumarr[i]);
	}
	return 0;
	
}              
