#include<stdio.h>
int main()
{
	int a[10];
	int even=0,odd=0,i;
	printf("Enter the numbers");
	for(i=0;i<10;i++){
		scanf("%d\n",&a[i]);
	}
	for(i=0;i<10;i++){
		if(a[i]%2==0)
		   even=even+1;
		else
		    odd=odd+1;   
    }
    printf("Even elements are: %d\n",even);
    printf("odd elements are: %d",odd);
    return 0;
}
