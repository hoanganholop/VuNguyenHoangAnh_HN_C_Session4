#include<stdio.h>

int main(){
	int number;
	printf("Nhap mot so nguyen: ");
	scanf("%d",&number);
	
	if(number>0){
		printf("Day la so nguyen duong");  
	} else if (number==0){
		printf("%d khong la so nguyen duong, khong la so nguyen am", number);
	}else{
		printf("Day la so nguyen am"); 
	} 
	return 0; 
} 
