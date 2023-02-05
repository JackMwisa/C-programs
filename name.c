/* 

Ask a user for their first name,
Second name,
Age,
Adress.



*/


#include <stdio.h>

int main(){

    char first_name;
    char last_name;
    char sex;
    int age;
    char address;



    printf("Please enter your first name\n");
    scanf("%s", &first_name);
    
    printf("Please enter your the second name\n");
    scanf("%s", &last_name);

    printf("Please enter your gender\n");
    scanf("%s", &sex);

    printf("Please enter your age\n");
    scanf("%d", &age);

    printf("Please enter your address\n");
    scanf("%s", &address); 

    printf("%s and %s and %s and %d and %s \n", first_name, last_name, sex, age, address);

    return 0;

    
}

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
41

