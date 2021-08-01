#include <stdio.h>

int sum = 0;
int n;
 
int main(){
    printf("Nhap n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= (2*n+1); i+=2){
        //if (i % 2 != 0)
        sum = sum + i;
    }
    
    printf("%d", sum);
}