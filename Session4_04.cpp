#include<stdio.h>

int main(){
	int n;
	printf("Moi ban nhap thang tu 1-12: ");
	scanf("%d",&n);
	switch (n){
		case 1:
			printf("Co 31 ngay");
			break;
		case 2:
			printf("Co 28 ngay, neu nam nhuan co 29 ngay");
			break;
		case 3:
			printf("Co 31 ngay");
			break;	
		case 4:
			printf("Co 30 ngay");
			break;
		case 5:
			printf("Co 31 ngay");
			break;
		case 6:
			printf("Co 30 ngay");
			break;
		case 7:
			printf("Co 31 ngay");
			break;
		case 8:
			printf("Co 31 ngay");
			break;
		case 9:
			printf("Co 30 ngay");
			break;
		case 10:
			printf("Co 31 ngay");
			break;
		case 11:
			printf("Co 30 ngay");
			break;
		case 12:
			printf("Co 31 ngay");
			break;
		default:
		    printf("Thang ban nhap khong ton tai");
													
	}
	return 0;
}
