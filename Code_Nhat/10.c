#include <stdio.h>

int main()
{
    for (int i = 2; i <= 9; i++) {
      for (int j = 1; j <= 9; j++) {
         printf(" %dx%d=%2d", i, j, i*j);
         printf("   ");
      }

      printf("\n");
   }
   
   for (int i = 2; i <= 10; i++){
       printf(" %dx10=%d", i, i*10);
       printf("  ");
   }

    return 0;
}