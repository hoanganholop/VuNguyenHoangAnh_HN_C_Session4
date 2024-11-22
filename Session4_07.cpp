#include <stdio.h>

int main() {
	// Cho nguoi dung nhap nam
    int year;

    printf("Nhap vao mot nam: ");
    scanf("%d", &year);

    // Kiem tra dieu kien cua nam nhuan va in ket qua
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d la nam nhuan\n", year);
    } else {
        printf("%d khong phai nam nhuan\n", year);
    }

    return 0;
}

