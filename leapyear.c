#include <stdio.h>

int main() {
    int year;
    printf("enter any year: ");
    scanf("%d",&year);
    if(year%400==0 || year%4==0 && year%100!=0 ) {
        printf("year is leapyear");
    }
    else {
        printf("year is not leapyear");
    }
    return 0;
}