#include <stdio.h>

int main() {
    int num1,num2;
    printf("enter two number to  be checked");
    scanf("%d%d",&num1,&num2);
    
    if(num1==num2) {
        printf("the entered number is equal");
    } else{
        printf("the entered number is not equal");
    }

    return 0;
}