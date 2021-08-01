#include <stdio.h>

int day, month, year;
char *month_char;

int main(){
    printf("Nhap ngay thang nam: ");
    scanf("%d %d %d", &day, &month, &year);
    
    switch(month){
        case 1:
            month_char = "January";
            break;
        case 2:
            month_char = "February";
            break;
        case 3:
            month_char = "March";
            break;
        case 4:
            month_char = "April";
            break;
        case 5:
            month_char = "May";
            break;
        case 6:
            month_char = "June";
            break;
        case 7:
            month_char = "July";
            break;
        case 8:
            month_char = "August";
            break;
        case 9:
            month_char = "September";
            break;
        case 10:
            month_char = "October";
            break;
        case 11:
            month_char = "November";
            break;
        case 12:
            month_char = "Demcember";
            break;
    }
    
    printf("%s %d", month_char, day);
    
    switch (day){
        case 1:
            printf("st, ");
            break;
        case 2:
            printf("nd, ");
            break;
        case 3:
            printf("rd, ");
            break;
        default:
            printf("th, ");
            break;
    }
    
    printf("%d", year);
    return 0;
}