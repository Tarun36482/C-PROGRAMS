#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character:");
	scanf("%c" ,&ch);
	
	if(ch>='A' &&ch <='Z'){
		printf("UPPER CASE\n");
	}
	else if(ch>='a' && ch<='z'){
		printf("LOWER CASE\n");
	}
	else {
		printf("Not a valid english character");
	}
	return 0;
}














