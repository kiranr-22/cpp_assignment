#include <stdio.h>

float celsiusToFehrenheit(float c);
float FehrenheitToCelsius(float f);

int main(){

    float  c,f;

    printf ("enter the value of c:");
    scanf("%f",&c);

    printf ("enter the value of f:");
    scanf("%f",&f);


    float cf= celsiusToFehrenheit(c);
    float fc= FehrenheitToCelsius(f);

    printf ("%.2f celsius = %.2f Fehrenheit :\n",c,cf);
    printf ("%.2f Fehrenheit = %.2f Celsius :\n",f,fc);


    return 0;
}

    float celsiusToFehrenheit(float c){
        return (c*9/5)+32;

    }



    float FehrenheitToCelsius(float f){

        return (f-32)*5/9;

    }