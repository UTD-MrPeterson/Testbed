#include <cmath>
#include <iostream>
#include <iomanip>

int main() {
    int totalCost = 18;
    int numItems= 4;
    double costPerItem = static_cast<double>(totalCost) / numItems;
    std::cout << costPerItem << std::endl;
    std::cout << static_cast<int>(costPerItem) << std::endl;



    /* Average
    int item=0;
    int average=0;
    int count=0;
    std::cin >> item;
    average = average + item;
    count = count + 1;
    std::cin >> item;
    average = average + item;
    count = count + 1;
    average = average / count;
    std::cout << average << std::endl;*/
}
