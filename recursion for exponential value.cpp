//WAP in C to find the exponential value of a given base and a given power using recursion.
#include<stdio.h>
int power1(int base,int p){
	if(p==0)
	    return 1;
	else
	    return base*power1(base,p-1);    
	    
}

int main(){
	int base,p;
	printf("Enter the base: ");
	scanf("%d",&base);
	printf("Enter the power : ");
	scanf("%d",&p);
	printf("The exponential value is: %d\n",power1(base,p));
	return 0;
}
