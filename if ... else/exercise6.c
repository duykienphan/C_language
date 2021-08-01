#include <stdio.h>
#include <math.h>

void main ()
{
    int choice;
    float area, radius, length, width, a, b, c;
    char *shape;
    
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
            area = 3.14 * radius * radius;
            shape = "hinh tron";
            printf("Dien tich %s la: %.2f", shape, area);
            break;
        case 2:
            printf("Nhap chieu dai va chieu cao cua hinh chu nhat: ");
            scanf("%f%f", &length, &width);
            if (length <= width)
                printf("Chieu dai khong duoc nho hon chieu rong");
            else{
                area = length * width;
                shape = "hinh chu nhat";
                printf("Dien tich %s la: %.2f", shape, area);
            }
            break;
        case 3:
            printf("Nhap chieu dai 3 canh cua tam giac: ");
            scanf("%f%f%f", &a, &b, &c);
            float p = (a + b + c) / 2;
            area = sqrt(p*(p-a)*(p-b)*(p-c));
            shape = "hinh tam giac";
            printf("Dien tich %s la: %.2f", shape, area);
            break;
    }
}



