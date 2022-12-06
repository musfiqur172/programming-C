#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Enter the temperature in celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Temperature in fahrenheit is: %lf\n", fahrenheit);
    return 0;
}