#include <stdio.h>

int n;

int main()
{
    while (n <= 0){
        printf("Nhap canh: ");
        scanf("%d", &n);
    }
    
    printf("\n");
    triangle1(n);
    printf("\n");
    triangle2(n);

    return 0;
}

int triangle1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j = 1; j <= 2*i-1; j++)
            printf("*");
        printf("\n");
    }
}

int triangle2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i; j < n; j++){
            printf(" ");
        }


        for(int j = 1; j <= (2*i-1); j++){
            if(i == n || j == 1 || j == (2*i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}