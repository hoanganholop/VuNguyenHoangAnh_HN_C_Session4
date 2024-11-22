#include <stdio.h>

int main() {
	// Cho nguoi dung nhap tung canh cua tam giac side1, side2, side3
    float side1, side2, side3;
    
    printf("Nhap do dai canh thu nhat: ");
    scanf("%f", &side1);
    printf("Nhap do dai canh thu hai: ");
    scanf("%f", &side2);
    printf("Nhap do dai canh thu ba: ");
    scanf("%f", &side3);

    // Kiem tra xem co phai 3 canh cua tam giac khong va in ra ket qua
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("%.2f %.2f %.2f la 3 canh cua tam giac ", side1, side2, side3);
    } else {
        printf("%.2f %.2f %.2f khong phai la 3 canh cua tam giac ", side1, side2, side3);
    }

    return 0;
}

