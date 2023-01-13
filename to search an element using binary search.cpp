//WAP in C to search an element in a given array using binary search.
#include<stdio.h>
int main()
{
	int i,j,n,temp,mid,ele,first,last;
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
	 
	 printf("sorted array is ");
	 for(i=0;i<n;i++){
	 	printf("%d",a[i]);
	 }
	 printf("\n");
	 printf("ENter the value to be searched: ");
	 scanf("%d",&ele);
	 first=0;
	 last=n-1;
	 while(first<=last){
	 	mid=(first+last)/2;
	 	if(a[mid]==ele){
	 		printf("Element found!");
	 		break;
		 }
		 else if(a[mid]>ele){
		 	last=mid-1;
		 }
		 else
		    first=mid+1;
	 }
	 return 0;
}
