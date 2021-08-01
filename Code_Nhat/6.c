#include <stdio.h>

int d, r;

int main()
{
    while (d <= 0){
        printf("Nhap canh thu 1: ");
        scanf("%d", &d);
    }
    
    while (r <= 0){
        printf("Nhap canh thu 2: ");
        scanf("%d", &r);
    }
    
    printf("\n");
    rec1(d, r);
    printf("\n");
    rec2(d, r);

    return 0;
}

int rec1(int d, int r){
    for(int i = 1; i <= d; i++)    {
        for(int j = 1 ; j <= r; j++){
            if(i == 1 || j == 1 || i == d || j == r){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

int rec2(int d, int r){
    for(int i = 1; i <= d; i++)    {
        for(int j = 1 ; j <= r; j++){
            if(i == 1 || j == 1 || i == d || j == r){
                printf("* ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
}