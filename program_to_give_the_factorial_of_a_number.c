#include <stdio.h>

int main(){

    int i, fact=1, number;

    printf("Enter a number to compute the factorial: ");
    scanf("%d", &number);

        for (i=1; i<=number; i++){
            fact*=i;
        }
        printf("Hey, the factorial of %d is %d", number, fact);
        return 0;
}