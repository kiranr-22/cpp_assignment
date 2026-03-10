#include <stdio.h>

int main(){
    float a,b,c,d,e;
    float total,percentage;
    char grade;

    printf("Enter marks of a: ");
    scanf("%f",&a);

    printf("Enter marks of b: ");
    scanf("%f",&b);

    printf("Enter marks of c: ");
    scanf("%f",&c);   

    printf("Enter marks of d: ");
    scanf("%f",&d);

    printf("Enter marks of e: ");
    scanf("%f",&e);

    total = a + b + c + d + e;
    percentage = total / 5;

    grade = (percentage>=70)?'A':
            (percentage>=60)?'B':
            (percentage>=45)?'C':'F';

    printf("\nTotal marks: %.2f\n", total);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
} 