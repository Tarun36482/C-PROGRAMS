//WAP in C to calculate the simple interest using functions.
#include<stdio.h>
float si(float a,float b,float c){
	float s_i;
	s_i=(a*b*c)/100;
	printf("The simple interest is: %0.2f\n",s_i);
}
int main(){
	float prin,rate,time;
	printf("Enter the principle: ");
	scanf("%f",&prin);
	printf("Enter the rate: ");
	scanf("%f",&rate);
	printf("Enter the time: ");
	scanf("%f",&time);
	si(prin,rate,time);
	return 0;
}
