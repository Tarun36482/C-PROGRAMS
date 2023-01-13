#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	printf("Enter the size of the string: ");
	scanf("%d",&n);
	char a[n];
	printf("Enter the string\n");
	for(i=0;i<n;i++){
		scanf("%c",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%c ",a[i]);
	}
	return 0;
}
