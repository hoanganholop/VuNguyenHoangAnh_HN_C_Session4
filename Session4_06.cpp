#include <stdio.h>

int main() {
	// Tao cac bien sodiencu, sodienmoi, sotieuthu, tiendien 
    float sodiencu, sodienmoi, sotieuthu, tiendien;
    // Cho nguoi dung nhap vao so dien cu va so dien moi
    printf("Nhap so dien cu: ");
    scanf("%f", &sodiencu);
    printf("Nhap vao so dien moi: ");
    scanf("%f", &sodienmoi);

    // Tinh so dien tieu thu
    sotieuthu = sodienmoi - sodiencu;

    // Kiem tra so dien tieu thu co hop le khong
    if (sotieuthu < 0) {
        printf("Chi so moi nho hon chi so cu. Hay nhap lai\n");
        return 1; // Thoat chuong trinh
    }

    // Tinh tien dien theo bang gia
    if (sotieuthu < 50) {
        tiendien = sotieuthu * 10000;
    } else if (50 <= sotieuthu && sotieuthu < 100) {
        tiendien = 49 * 10000 + (sotieuthu - 49) * 15000;
    } else if (100 <= sotieuthu && sotieuthu < 150) {
        tiendien = 49 * 10000 + 50 * 15000 + (sotieuthu - 99) * 20000;
    } else if (150 <= sotieuthu && sotieuthu < 200) {
    	tiendien = 49 * 10000 + 50 * 15000 + 50 * 20000 + (sotieuthu - 149) * 25000;
	} else{
		tiendien = 49 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (sotieuthu - 199) * 30000;
	}

    // In ket qua
    printf("So dien tieu thu trong thang la: %.2f kWh\n", sotieuthu);
    printf("Tien dien phai tra la: %.2f dong\n", tiendien);

    return 0;
}

