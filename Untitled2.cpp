#include<stdio.h>
//function declaration
void printhello();
void printgoodbye();

int main()
{
	printhello(); //function calling
	printgoodbye();
	printhello();
	return 0;
}
//function defination
void printhello(){
	printf("Hello \n");	
}
void printgoodbye(){
	printf("Good bye\n");
}
