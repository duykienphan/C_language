#include<stdio.h>

int main(){
    float DTB, Math, Lit;
    scanf("%f%f%f", &DTB, &Math, &Lit);
    
    if (DTB >= 8 && Math >= 0 && Math <= 10 
        && Lit >= 0 && Lit <= 10 
        && DTB >= 0 && DTB <= 10){
            
        if (Math >= 8 || Lit >= 8)
            printf("Hoc luc gioi");
        else if (Math >= 6.5 || Lit >= 6.5)
            printf("Hoc luc kha");
        else if (Math >= 5 || Lit >= 5)
            printf("Hoc luc TB");
        else
            printf("Hoc luc yeu");
    }
    
    else if (DTB >= 6.5 && Math >= 0 && Math <= 10 
            && Lit >= 0 && Lit <= 10 
            && DTB >= 0 && DTB <= 10){
                
        if (Math >= 6.5 || Lit >= 6.5)
            printf("Hoc luc kha");
        else if (Math >= 5 || Lit >= 5)
            printf("Hoc luc TB");
        else
            printf("Hoc luc yeu");
    }
    
    else if (DTB >= 5 && Math >= 0 && Math <= 10 
            && Lit >= 0 && Lit <= 10 
            && DTB >= 0 && DTB <= 10){
                
        if (Math >= 5 || Lit >= 5)
            printf("Hoc luc TB");
        else
            printf("Hoc luc yeu");
    }
    
    else if (DTB < 5 && Math >= 0 && Math <= 10 
            && Lit >= 0 && Lit <= 10 
            && DTB >= 0 && DTB <= 10){
                
        printf("Hoc luc yeu");
    }
    
    else
        printf("Diem nhap khong hop le");
}