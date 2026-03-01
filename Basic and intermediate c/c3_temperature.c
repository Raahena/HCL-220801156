//3. Given a temperature in Celsius, convert and print in Fahrenheit with one decimal.
#include <stdio.h>

int main()
{
    float c, f;
    scanf("%f", &c);
    f = (c * 9.0 / 5.0) + 32.0;
    printf("%.1f", f);
    return 0;
}



