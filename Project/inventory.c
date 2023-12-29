#include <stdio.h>
#include <limits.h>

#define MAX_SALSAS 5
#define MAX_NAME_LENGTH 20

int main() {
    const char *salsaNames[MAX_SALSAS] = {"apples", "Bananas", "peaches", "watermelons", "strawberries"};
    int fruitsold[MAX_SALSAS];

    for (int i = 0; i < MAX_SALSAS; ++i) {
        do {
            printf("Enter number of fruits sold for %s: ", salsaNames[i]);
            if (scanf("%d", &fruitsold[i]) != 1 || fruitsold[i] < 0) {
                printf("Please enter a non-negative value for fruits sold.\n");
                // Clear the input buffer in case of invalid input
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }
        } while (fruitsold[i] < 0);
    }

    int totalSales = 0;
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 0; i < MAX_SALSAS; ++i) {
        totalSales += fruitsold[i];

        if (fruitsold[i] > fruitsold[highestIndex]) {
            highestIndex = i;
        }

        if (fruitsold[i] < fruitsold[lowestIndex]) {
            lowestIndex = i;
        }
    }

    printf("\nSales Report\n");
    printf("-----------------\n");
    for (int i = 0; i < MAX_SALSAS; ++i) {
        printf("%s: %d fruits\n", salsaNames[i], fruitsold[i]);
    }

    printf("-----------------\n");
    printf("Total Sales: %d fruits\n", totalSales);
    printf("Highest Selling Product: %s (%d fruits)\n", salsaNames[highestIndex], fruitsold[highestIndex]);
    printf("Lowest Selling Product: %s (%d fruits)\n", salsaNames[lowestIndex], fruitsold[lowestIndex]);

    return 0;
}
