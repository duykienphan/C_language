#include <stdio.h>

int factorial = 1;
int n;
 
int main(){
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(int i = 2; i <= n; i++){
        factorial = factorial * i;
    }
    
    printf("%d", factorial);
}