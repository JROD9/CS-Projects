#include <iostream>
#include <climits>
#include <iomanip>
#include <string>
int main()
{
     const int numSalsas = 5;


    std::string salsaNames[numSalsas] = {"apples", "Bananas", "peaches", "watermelons", "strawberries"};
    int fruitsold[numSalsas];


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
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 0; i < numSalsas; ++i) {
        totalSales += fruitsold[i];

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
        std::cout << salsaNames[i] << ": " << fruitsold[i] << " fruits\n";
    }

    std::cout << "-----------------\n";
    std::cout << "Total Sales: " << totalSales << " fruits\n";
    std::cout << "Highest Selling Product: " << salsaNames[highestIndex] << " (" << fruitsold[highestIndex] << " fruits)\n";
    std::cout << "Lowest Selling Product: " << salsaNames[lowestIndex] << " (" << fruitsold[lowestIndex] << " fruits)\n";

    return 0;
}
