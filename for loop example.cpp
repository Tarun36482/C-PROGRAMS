#include<stdio.h>
int main()
{
	for(int i=1; i<=10; i=i+1){
		printf("%d" ,i);
	}
	for(float i=1.0;i<=5.0;i++){
		printf("%f\n" ,i);
	}
	for(char ch='a';ch<='z';ch++){
		printf("%c\n",ch);
	}
	return 0;
}
