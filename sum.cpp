//WAP in C to find the sum of the second largest 
#include<stdio.h>
int main()
{
	int i,j,n,temp,sum;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter the value: ");
		scanf("%d",&a[i]);
	}
	printf("Unsorted array is: ");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		
		printf("sorted array is ");
	 for(i=0;i<n;i++){
	 	printf("%d",a[i]);
	 }
	}
	printf("\n");
	 for(i=0;i<n;i++){
	 	for(j=0;j<n-i-1;j++){
	 		if(a[j]>a[j+1]){
	 			temp=a[j];
	 			a[j]=a[j+1];
	 			a[j+1]=temp;
			 }
	 		
	 		
		 }
	 }
	 sum=a[2]+a[n-2];
	 printf("%d",sum);
	 return 0;
}
