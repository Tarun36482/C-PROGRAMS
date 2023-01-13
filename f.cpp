#include<stdio.h>
int main()
{
	int i,n,x;
	scanf("%d",&x);
	int a[5]={12,13,14,15};
	for(i=(5-1);i>0;i--){
	
		a[i]=a[i-1];}
		a[0]=x;
		for(i=0;i<5;i++){
			printf("%d ",a[i]); 
		}
		
		
}

