#include <stdio.h>

int main() {
    int numb1, numb2, numb3;

    printf("Nhap so thu nhat: ");
    scanf("%d", &numb1);
    printf("Nhap so thu hai: ");
    scanf("%d", &numb2);
    printf("Nhap so thu ba: ");
    scanf("%d", &numb3);

    if ((numb3 > numb1 && numb3 < numb2) || (numb3 < numb1 && numb3 >numb2)) {
        printf("So thu ba %d nam trong khoang giua so thu nhat %d va so thu hai %d.\n", numb3, numb1, numb2);
    } else {
        printf("So thu ba %d khong nam trong khoang giua so thu nhat %d va so thu hai %d.\n", numb3, numb1, numb2);
    }

    return 0;
}

