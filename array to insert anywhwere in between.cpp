//#wap in to insert a value anywhere in the array
#include<stdio.h>
int main()
{
	int a[100],n,i,value,x;
	printf("Enter number of the elements to be inserted: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the element: ");
		scanf("%d",&a[i]);
	}
	printf("THe array created is: ");
	for(i=0;i<n;i++){
		printf("%d" ,a[i]);
	}
	printf("\nEnter the index to be updated: ");
	scanf("%d",&x);
	x--;
	
	printf("\nEnter the value to be updated: ");
	scanf("%d",&value);
	for(i=n;i>x;i--){
		a[i]=a[i-1];
	}
	a[x]=value;
	printf("The updated array is: ");
	for(i=0;i<=n;i++){
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
