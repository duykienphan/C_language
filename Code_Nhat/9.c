#include <stdio.h>

int n;
long long int P;

int main()
{
    while (n <= 0){
        printf("Nhap so n: ");
        scanf("%d", &n);
    }
    
    printf("\n");
    multi(n);

    return 0;
}

int multi(int n){
    printf("Tong P la: ");
    P = 1;
    for (int i = 1; i <= 2*n+1; i++){
        if (i % 2 != 0){
            P = P * i;
        }
    }
    printf("%lli", P);
}