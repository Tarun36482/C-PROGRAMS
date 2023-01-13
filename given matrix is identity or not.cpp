//WAP in C to check whether the given matrix is identity or not. 
#include<stdio.h>
int main()
{
	int m,n,i,j,flag=1;
	printf("Enter the number of rows and column");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the element: ");
			scanf("%d",&a[i][j]);
			if(i==j&&a[i][j]!=1 || i!=j&&a[i][j]!=0)
			flag=0;
		}
	}
	printf("Thecreated matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			
		}
		
		printf("\n");
	}
	if(flag)
	printf("It is an identity matrix\n");
	else
	printf("It is not an identity ,matrix");
	return 0;
}
