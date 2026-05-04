#include <stdio.h>

int main(void) 
{
    int integer_val = 42;    
    double float_val = 3.10; 

    printf("Integer output:  %d\n", integer_val);
    printf("Floating output: %.2f\n", float_val);

    printf("\nAligned Display:\n");
    printf("Value 1: %10d\n", integer_val);
    printf("Value 2: %10.2f\n", float_val);

    printf("\nPress Enter to exit...");
    getchar(); 

    return 0; 
}
