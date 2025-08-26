#include <stdio.h>

int main(void)
{
    int paycode;
    int week = 0, week_salary = 1000;
    int hours = 0, hour_salary = 50;
    int gross_week_sales = 0;
    int item_money = 100, items = 0;

    printf("Enter the paycode (Ctrl+Z to quit): ");

    // only enter loop when scanf successfully reads 1 integer
    while (scanf("%d", &paycode) == 1) {

        switch (paycode) {
        case 1:
            printf("Enter how many weeks: ");
            scanf("%d", &week);
            printf("The weekly pay for manager is %d\n", week * week_salary);
            break;

        case 2:
            printf("Enter how many hours: ");
            scanf("%d", &hours);
            if (hours >= 40) {
                printf("The hourly wage is %.2lf\n",
                    40 * (double)hour_salary +
                    ((double)hours - 40) * 1.5 * (double)hour_salary);
            }
            else {
                printf("The hourly wage is %d\n", hours * hour_salary);
            }
            break;

        case 3:
            printf("Enter gross weekly sales: ");
            scanf("%d", &gross_week_sales);
            printf("The salary is %d\n", 250 + gross_week_sales * 57 / 1000);
            break;

        case 4:
            printf("Enter how many items produced: ");
            scanf("%d", &items);
            printf("The money is %d\n", items * item_money);
            break;

        default:
            printf("Unknown paycode\n");
        }

        printf("\nEnter the paycode (Ctrl+Z to quit): ");
    }

    return 0;
}
