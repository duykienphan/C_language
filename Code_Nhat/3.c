#include <stdio.h>

int sum = 0;
int n;
 
int main(){
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(int i = 2; i <= (2*n); i++){
        if (i % 2 == 0)
            sum = sum + i;
    }
    
    printf("%d", sum);
}