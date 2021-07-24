#include<stdio.h>

float money, result;
int unit;

int main(){
    printf("Nhap so 1 de chon don vi tien te Viet Nam\n");
    printf("Nhap so 2 de chon don vi tien te My\n");
    printf("Chon don vi tien te: ");
    scanf("%d", &unit);
    printf("Nhap so tien: ");
    scanf("%f", &money);
    
    if (unit == 1){
        printf("%.2f USD\n", money/23000);
        printf("%.2f Pound\n", money/31646.11);
        printf("%.2f Yen\n", money/208.11);
        printf("%.2f Won\n", money/19.97);
    }
    
    else if (unit == 2){
        printf("%.2f VND\n", money*23000);
        printf("%.2f Pound\n", money*0.73);
        printf("%.2f Yen\n", money*110.52);
        printf("%.2f Won\n", money*1151.73);
    }
    
    else{
        printf("Don vi tien te nay chua duoc cap nhat!");
    }
    
    return 0;
}