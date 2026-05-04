#include <stdio.h>

int main(void) 
{

    double principal = 1000.0;
    double current_balance = principal;
    double rate = 0.03;      // 3% monthly interest
    int months = 24;
    double total_interest_accrued = 0.0;

    printf("Interest Simulation: 24-Month Period\n");
    printf("----------------------------------------------------------------------\n");
    printf("%-8s | %-12s | %-10s | %-12s | %-8s\n", 
           "Month", "Debt", "Interest", "Total Int.", "Fraction");
    printf("----------------------------------------------------------------------\n");

    for (int i = 1; i <= months; i++)
    {
        double monthly_interest = rate * current_balance;
        
        total_interest_accrued += monthly_interest;
        current_balance += monthly_interest;
        
        double fraction = (total_interest_accrued / principal) * 100.0;

        printf("Month %-2d | %12.2f | %10.2f | %12.2f | %7.2f%%\n", 
               i, current_balance, monthly_interest, total_interest_accrued, fraction);
    }

    printf("----------------------------------------------------------------------\n");
    printf("Final Debt: %.2f\n", current_balance);
    
    printf("\nPress Enter to exit...");
    getchar(); 

    return 0;
}
