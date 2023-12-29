#include <iostream>
#include <climits>
#include <iomanip>
#include <string>
int main()
{
     const int numSalsas = 5;


    std::string salsaNames[numSalsas] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[numSalsas];


    for (int i = 0; i < numSalsas; ++i) {
        do {
            std::cout << "Enter number of jars sold for " << salsaNames[i] << ": ";
            std::cin >> jarsSold[i];


            if (jarsSold[i] < 0) {
                std::cout << "Please enter a non-negative value for jars sold." << std::endl;
            }
        } while (jarsSold[i] < 0);
    }


    int totalSales = 0;
    int highestIndex = 0, lowestIndex = 0;

    for (int i = 0; i < numSalsas; ++i) {
        totalSales += jarsSold[i];

        if (jarsSold[i] > jarsSold[highestIndex]) {
            highestIndex = i;
        }

        if (jarsSold[i] < jarsSold[lowestIndex]) {
            lowestIndex = i;
        }
    }


    std::cout << "\nSales Report\n";
    std::cout << "-----------------\n";
    for (int i = 0; i < numSalsas; ++i) {
        std::cout << salsaNames[i] << ": " << jarsSold[i] << " jars\n";
    }

    std::cout << "-----------------\n";
    std::cout << "Total Sales: " << totalSales << " jars\n";
    std::cout << "Highest Selling Product: " << salsaNames[highestIndex] << " (" << jarsSold[highestIndex] << " jars)\n";
    std::cout << "Lowest Selling Product: " << salsaNames[lowestIndex] << " (" << jarsSold[lowestIndex] << " jars)\n";

    return 0;
}
