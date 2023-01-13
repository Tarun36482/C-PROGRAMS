//WAP in C to find the exponential value of a given base and a given power using recursion.
#include<stdio.h>
int sum(int a){
	if(a==0)
	    return 0;
	else
	    return (a(a+1)/2);   
	    
}

int main(){
	int a,sum;
	printf("Enter the number: ");
	scanf("%d",&a);
	sum=a(a+1)/2;
	printf("The sum of natural number is: %d\n",sum);
	return 0;
}
