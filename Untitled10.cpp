#include<stdio.h>
int calpercentage(int science,int sanskrit,int math);
int main(){
	int science=98;
	int math=95;
	int sanskrit=99;
	
	printf("percentage is: %d",calpercentage(science,sanskrit,math));
	return 0;
	
}

int calpercentage(int science,int sanskrit,int math){
	return((science+math+sanskrit)/3);
}
