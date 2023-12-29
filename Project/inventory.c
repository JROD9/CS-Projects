#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_SALSAS 5
#define INITIAL_INVENTORY 15

void getSales(int *fruitsold, const char **salsaNames, int *inventory) {
    for (int i = 0; i < NUM_SALSAS; ++i) {
        do {
            printf("Enter number of fruits sold for %s: ", salsaNames[i]);
            scanf("%d", &fruitsold[i]);

            if (fruitsold[i] < 0 || fruitsold[i] > 15) {
                printf("Please enter a non-negative value less than or equal to 15 for fruits sold.\n");
            }
        } while (fruitsold[i] < 0 || fruitsold[i] > 15);

        // Update inventory
        inventory[i] -= fruitsold[i];
    }
}

int main() {
    const char *salsaNames[NUM_SALSAS] = {"apples", "bananas", "peaches", "watermelons", "strawberries"};
    int fruitsold[NUM_SALSAS];
    double prices[NUM_SALSAS] = {1.5, 2.0, 1.8, 3.0, 2.5}; // Prices for each fruit
    int inventory[NUM_SALSAS] = {INITIAL_INVENTORY, INITIAL_INVENTORY, INITIAL_INVENTORY, INITIAL_INVENTORY, INITIAL_INVENTORY};

    printf("Welcome to the Fruit Sales Management System!\n");
    printf("Please enter the number of fruits sold for each type of fruit (maximum 15).\n");

    getSales(fruitsold, salsaNames, inventory);

    int totalSales = 0;
    double totalRevenue = 0.0;
    int highestIndex = 0, lowestIndex = 0;

    printf("\nSales Report\n");
    printf("-----------------\n");
    for (int i = 0; i < NUM_SALSAS; ++i) {
        double revenue = fruitsold[i] * prices[i];
        // Profits are 50%
        double profit = revenue - (fruitsold[i] * 0.5);
        printf("%s: %d fruits | Inventory Left: %d | Revenue: $%.2f | Profit: $%.2f\n", salsaNames[i], fruitsold[i], inventory[i], revenue, profit);

        totalSales += fruitsold[i];
        totalRevenue += revenue;

        if (fruitsold[i] > fruitsold[highestIndex]) {
            highestIndex = i;
        }

        if (fruitsold[i] < fruitsold[lowestIndex]) {
            lowestIndex = i;
        }
    }

    printf("-----------------\n");
    printf("Total Sales: %d fruits\n", totalSales);
    printf("Total Revenue: $%.2f\n", totalRevenue);
    printf("Highest Selling Product: %s (%d fruits)\n", salsaNames[highestIndex], fruitsold[highestIndex]);
    printf("Lowest Selling Product: %s (%d fruits)\n", salsaNames[lowestIndex], fruitsold[lowestIndex]);

    return 0;
}
