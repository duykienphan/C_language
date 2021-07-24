#include <stdio.h>

float soDien, tienDien;
int bac1 = 1000, bac2 = 1300, bac3 = 1500, bac4 = 1800, bac5 = 2000, bac6 =2500;

int main (){
    scanf ("%f", &soDien);
      
    if (soDien < 0){
    printf ("\nVui long nhap lai So Dien\nSo dien khong duoc nho hon 0\n");
    }
    else if (soDien <= 50){
        tienDien = soDien * bac1;
        printf("%.1f", tienDien);
        printf(" VNĐ");
    }
    else if (soDien <= 100){
        tienDien = 50 * bac1 + ((soDien - 50) * bac2);
        printf("%.1f", tienDien);
        printf(" VNĐ");
    }
    else if (soDien <= 200){
        tienDien = 50 * bac1 + (50 * bac2) + ((soDien - 100) * bac3);
        printf("%.1f", tienDien);
        printf(" VNĐ");
    }
    else if (soDien <= 300){
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + ((soDien - 200) * bac4);
        printf("%.1f", tienDien);
        printf(" VNĐ");
    }
    else if (soDien <= 400){
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + ((soDien - 300) * bac5);
        printf
    	("%.1f", tienDien);
    	printf(" VNĐ");
    }
    else if (soDien > 400){
        tienDien = 50 * bac1 + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + ((soDien - 400) * bac6);
        printf("%.1f", tienDien);
        printf(" VNĐ");
    }
      
    return 0;
}
