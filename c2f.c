#include <stdio.h>

/* Print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300; floating point version */
int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = -18;      /* lower limit of temperature table */
    upper = 150;    /* upper limit */
    step = 6;      /* step size */

    printf("Cels  Fahr\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0 /  5.0) * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}