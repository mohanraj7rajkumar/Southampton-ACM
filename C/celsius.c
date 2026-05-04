#include <stdio.h>

int main(void) 
{
    double far, cel;
    int lower, upper, step;

    lower = -30;
    upper = 30;
    step = 2;

    cel = (double)lower;

    printf("%10s | %10s\n", "Celsius", "Fahrenheit");
    printf("---------------------------\n");

    while (cel <= (double)upper) 
    {
        far = ((cel * 9.0) / 5.0) + 32.0;
        
        printf("%10.1f | %10.2f\n", cel, far);
        
        cel = cel + step;
    }

    printf("\nCalculation complete. Press Enter to exit.");
    
    getchar(); 

    return 0;
}
