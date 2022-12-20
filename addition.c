
#include <stdio.h>

int main(){

    int num1;
    int num2;
    int num3;
    int sum;
    int sub;
    int mult;
    float div;
    float average;


    printf("Please enter the first number\n");
    scanf("%d", &num1);
    
    printf("Please enter the second number\n");
    scanf("%d", &num2);

    printf("Please enter the third number\n");
    scanf("%d", &num3);

    sum = num1+num2+num3;
	sub = num1-num2-num3;
	mult = num1* num2*num3;
	div = num1/num2/num3; 
	average = sum / 3;

    printf("The sum is %d:\n", sum);
	printf("The difference is %d:\n", sub);
	printf("the product is %d :\n", mult);
	printf("the division is %d :\n", div);
	printf("the average %d :\n", average);
	
    return 0;

    
}
