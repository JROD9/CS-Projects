#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SALSAS 5

void getSales(int *fruitsold, const char **salsaNames) {
    for (int i = 0; i < NUM_SALSAS; ++i) {
        do {
            printf("Enter number of fruits sold for %s: ", salsaNames[i]);
            scanf("%d", &fruitsold[i]);

            if (fruitsold[i] < 0) {
                printf("Please enter a non-negative value for fruits sold.\n");
            }
        } while (fruitsold[i] < 0);
    }
}

int main() {
    const char *salsaNames[NUM_SALSAS] = {"apples", "bananas", "peaches", "watermelons", "strawberries"};
    int fruitsold[NUM_SALSAS];
    double prices[NUM_SALSAS] = {1.5, 2.0, 1.8, 3.0, 2.5}; // Prices for each fruit

    getSales(fruitsold, salsaNames);

    int totalSales = 0;
    double totalRevenue = 0.0;
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 0; i < NUM_SALSAS; ++i) {
        totalSales += fruitsold[i];
        double revenue = fruitsold[i] * prices[i];
        totalRevenue += revenue;

        if (fruitsold[i] > fruitsold[highestIndex]) {
            highestIndex = i;
        }

        if (fruitsold[i] < fruitsold[lowestIndex]) {
            lowestIndex = i;
        }
    }

    printf("\nSales Report\n");
    printf("-----------------\n");
    for (int i = 0; i < NUM_SALSAS; ++i) {
        double revenue = fruitsold[i] * prices[i];
        double profit = revenue - (fruitsold[i] * 0.5); // Assuming a cost of 50% of the price
        printf("%s: %d fruits | Revenue: $%.2f | Profit: $%.2f\n", salsaNames[i], fruitsold[i], revenue, profit);
    }

    printf("-----------------\n");
    printf("Total Sales: %d fruits\n", totalSales);
    printf("Total Revenue: $%.2f\n", totalRevenue);
    printf("Highest Selling Product: %s (%d fruits)\n", salsaNames[highestIndex], fruitsold[highestIndex]);
    printf("Lowest Selling Product: %s (%d fruits)\n", salsaNames[lowestIndex], fruitsold[lowestIndex]);

    return 0;
}
