#include <stdio.h>
#include <math.h>

void main ()
{
    int choice;
    float area, radius, length, width, a, b, c;
    
    printf("Nhap so 1 de tinh dien tich hinh tron\n");
    printf("Nhap so 2 de tinh dien tich hinh chu nhat\n");
    printf("Nhap so 3 de tinh dien tich hinh tam giac\n");
    printf("Tuy chon: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Nhap ban kinh hinh tron: ");
            scanf("%f", &radius);
            if (radius <= 0)
                printf("Do dai cac canh khong duoc am hoac bang 0");
            else{
                area = 3.14 * radius * radius;
                printf("Dien tich hinh tron la: %.2f", area);
            }
            break;
        case 2:
            printf("Nhap chieu dai va chieu cao cua hinh chu nhat: ");
            scanf("%f%f", &length, &width);
            if (length <= 0 || width <= 0)
                printf("Do dai cac canh khong duoc am hoac bang 0");
            else{
                area = length * width;
                printf("Dien tich hinh chu nhat la: %.2f", area);
            }
            break;
        case 3:
            printf("Nhap chieu dai 3 canh cua tam giac: ");
            scanf("%f%f%f", &a, &b, &c);
            if (a + b <= c || a + c <= b || b + c <= a)
                printf("Kich thuoc khong phu hop");
            else{
                float p = (a + b + c) / 2;
                area = sqrt(p*(p-a)*(p-b)*(p-c));
                printf("Dien tich hinh tam giac la: %.2f", area);
            }
            break;
    }
}
