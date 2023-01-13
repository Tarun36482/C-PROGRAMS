//#wap in c to delete an element at the end of an array.
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
	

	a[size-1]=0;
	printf("The updated array is: ");
	for(i=0;i<size-1;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;

}
