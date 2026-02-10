#include <stdio.h>

int main() {
    int marks;
    printf("enter marks : ");
    scanf("%d",&marks);
    
    if(marks>=85) {
        printf(" grade A top ");
    }
    else if(marks>=60 && marks<85) {
        printf(" grade B ");
    }
    else if(marks>=33 && marks<59) {
        printf(" grade C ");
    }
    else {
        printf(" grade D FAIL ");
    }
    return 0;
}