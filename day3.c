// write a program to convert temperature from celcius to fahreneit
#include<stdio.h>

int main() {
    int temp;

    printf("Enter the temperature in Celsius: ");
    scanf("%d", &temp);

    float temper = (9.0/5.0 * temp) + 32;

    printf("Temperature in Fahrenheit is: %.2f", temper);

    return 0;
}
