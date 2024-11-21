#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&number);
	
	if(number>0){
		printf("Day la so nguyen duong");  
	} 
	else{
		printf("Day la so nguyen am"); 
	} 
	return 0; 
} 
