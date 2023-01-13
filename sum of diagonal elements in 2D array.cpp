//WAP in C to find the sum of the diagonal elements of a given 2D matrix
#include<stdio.h>
int main()
{
	int n,i,j,sum=0,m;
	printf("Enter the number of rows and columns: ");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(i==j)
			   sum+=a[i][j];
			   
		}
	}
	printf("The matrix created is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("The sum of the diagonal elements is: %d\n",sum);
	return 0;
}
