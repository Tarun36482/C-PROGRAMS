//WAP in C to find the factorial of a number using recursion method
#include<stdio.h>
int fact(int x){
	if(x==0)
	     return 1;
	else
	     return x*(fact(x-1));     
}
int main(){
	int n;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("The factorial is: %d\n",fact(n));
	return 0;
}
