//#wap in c to delete an element at the beginning of an array.
#include<stdio.h>
int main()
{
	int size,i,ind;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
	printf("Enter the element: ");
	scanf("%d",&a[i]);	
	}
	
	for(i=0;i<size-1;i++){
		a[i]=a[i+1];
	}
	a[size-1]=0;
	printf("The updated array is: ");
	for(i=0;i<size-1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;

}
