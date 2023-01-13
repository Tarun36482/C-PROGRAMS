//#wap in c to find the average of all the elements ina given array
#include<stdio.h>
int main()
{
int i,size;float sum=0,avg;
printf("Enter the size of the array: ");
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++){
	printf("enter the element of the array: ");
	scanf("%d",&a[i]);
	sum+=a[i];
	

}
avg=sum/size;
printf("The sum of all the elements is %0.2f\n",sum);
printf("The average of all the elements is%0.2f\n",avg);
return 0;
}
