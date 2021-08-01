#include <stdio.h>
 
int main(){
    for(int i = 33; i < 127; ++i){
        printf("%5d%5c\n", i, i);
    }
}