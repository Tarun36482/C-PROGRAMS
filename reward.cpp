//#WAP in c to take input of marks of 100 studentsand count the frequency of each marks scored by the students greater than 60
#include<stdio.h>
int main()
{
	int marks[100],freq[40]={0},i;
	for(i=0;i<100;i++){
		printf("Enter the marks of the student %d: ",i+1);
		scanf("%d",&marks[i]);
		if(m8arks[i]>60)
		      freq[marks[i]-1]++;;
	}
	printf("\n\n");
	for(i=0;i<40;i++){
		if(freq[i]>0)
		printf("%d marks is scored by %d students\n",i+61,freq[i]);
	}

    return 0;
}
