//#wap in to find the sum all elements in a given array
#include<stdio.h>
int main()
{
	int size,i,sum=0;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	int a[size];
	for(i=0;i<size;i++){
		printf("Enter the element of the array: ");
		  scanf("%d" ,&a[i]);
		  sum+=a[i];
	}
	printf("The sum of all the elementsis %d\n",sum);
	return 0;
}
