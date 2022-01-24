#include<stdio.h>

float celToFahFun(float cel);
int main()
{
    float Celsius, Fahrenheit;
    printf("Enter Temperature Value (in Celsius): ");
    scanf("%f", &Celsius);
    Fahrenheit = celToFahFun(Celsius);
    printf("\nEquivalent Temperature Value (in Fahrenheit) = %0.2f", Fahrenheit);
 
    return 0;
}
float celToFahFun(float cel)
{
    return ((cel*9/5)+32);
}