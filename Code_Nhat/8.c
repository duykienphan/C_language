#include <stdio.h>

int n, count, sum;

int main()
{
    while (n <= 0){
        printf("Nhap so n: ");
        scanf("%d", &n);
    }
    
    printf("\n");
    divisor(n);

    return 0;
}

int divisor(int n){
    printf("Cac uoc so chan cua n: ");
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (i % 2 == 0){
                printf("%d ", i);
                sum = sum + i;
                count++;
            }
            else{
                count++;
                sum = sum + i;
            }
        }
    }
    
    printf("\n");
    printf("Tong tat ca cac uoc so cua n: %d\n", sum);
    printf("So uoc so cua n: %d", count);
}