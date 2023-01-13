#include<stdio.h>
#include<string.h>

int main(){
	char newstring[100]="tarun ";
	char oldstring[]="varshney";
	
	strcat(newstring,oldstring);
	puts(newstring);
	return 0;
} 

