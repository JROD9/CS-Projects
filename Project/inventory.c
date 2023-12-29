#include <iostream>
#include <iomanip>
#include <string>

int main() {
    const int numSalsas = 5;

    std::string salsaNames[numSalsas] = {"apples", "bananas", "peaches", "watermelons", "strawberries"};
    int fruitsold[numSalsas];
    double prices[numSalsas] = {1.5, 2.0, 1.8, 3.0, 2.5};  // Prices for each fruit

    for (int i = 0; i < numSalsas; ++i) {
        do {
            std::cout << "Enter number of fruits sold for " << salsaNames[i] << ": ";
            std::cin >> fruitsold[i];

            if (fruitsold[i] < 0) {
                std::cout << "Please enter a non-negative value for fruits sold." << std::endl;
            }
        } while (fruitsold[i] < 0);
    }

    int totalSales = 0;
    double totalRevenue = 0.0;
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 0; i < numSalsas; ++i) {
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

    std::cout << "\nSales Report\n";
    std::cout << "-----------------\n";
    for (int i = 0; i < numSalsas; ++i) {
        double revenue = fruitsold[i] * prices[i];
        double profit = revenue - (fruitsold[i] * 0.5);  // Assuming a cost of 50% of the price
        std::cout << std::fixed << std::setprecision(2);
        std::cout << salsaNames[i] << ": " << fruitsold[i] << " fruits | Revenue: $" << revenue << " | Profit: $" << profit << "\n";
    }

    std::cout << "-----------------\n";
    std::cout << "Total Sales: " << totalSales << " fruits\n";
    std::cout << "Total Revenue: $" << totalRevenue << "\n";
    std::cout << "Highest Selling Product: " << salsaNames[highestIndex] << " (" << fruitsold[highestIndex] << " fruits)\n";
    std::cout << "Lowest Selling Product: " << salsaNames[lowestIndex] << " (" << fruitsold[lowestIndex] << " fruits)\n";

    return 0;
}
