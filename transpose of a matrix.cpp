//WAP in C to transpose a given matrix. 
#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("Enter the number of rows and column");
	scanf("%d%d",&m,&n);
	int a[m][n],b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the element: ");
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("Thecreated matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			b[i][j]=a[j][i];
			printf("\n");
			
		}
		
	}
	printf("The transpose is\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			a[i][j]=b[i][j];
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
