#include<stdio.h>
#include<string.h>

int main()
{
	char a[50];
	printf("Enter a string: ");
	gets(a);
	strrev(a);
	printf("reversed string= %s",a);
	return 0;
	
}
