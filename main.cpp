#include <cmath>
#include <iostream>
#include <iomanip>

int main() {

    char myChar = 48;
    std::cout << myChar << std::endl;

    int myInt = 3;
    double myDouble = (double) myInt / 2;
    std::cout << myDouble << std::endl;

    /* sqrt()
    const int powerOfTwo = 49;
    const double smallerPowerOfTwo = 34.0;
    std::cout << sqrt(powerOfTwo) << std::endl;
    std::cout << sqrt(smallerPowerOfTwo) << std::endl;
    int result = sqrt(smallerPowerOfTwo);
    std::cout << result << std::endl;
     */

    /* PI constant
    const int radius = 3;
    std::cout << std::fixed << std::setprecision(2) <<
    "Circumference " << (radius * M_PI) << std::endl;
    radius *= 2;
     */

    /*int total = 50;
    int perItem = 4;
    int numberOfItems = total / perItem;
    int remainder = total - (numberOfItems * perItem);
    std::cout << "Number of items: " << numberOfItems << std::endl;
    std::cout << "Remainder: " << remainder << std::endl;*/

    //int my_integer = 0;
    //int myInteger = 40;
    //int total = (myInteger + 1) * (myInteger + 1);
    //std::cout << total << std::endl;


    /*int amount = 3;
    int cost = 4;
    int total;
    std::cout << "Undefined total: " << total << std::endl;
    total = amount * cost;
    std::cout << "Defined total: " << total << std::endl;

    int item=0;
    int average=0;
    int count=0;

    std::cin >> item;
    average = average + item;
    count = count + 1;

    std::cin >> item;
    average = average + item;
    count = count + 1;
    std::cout << count << std::endl;
    std::cout << average << std::endl;

    average = average / count;
    std::cout << average;*/

    //std::cout << "Hello, world!" << std::endl;

    /*
    double result = 5.0 + 3 / 4;
    std::cout << result << std::endl;
*/

    /* std::cin vs. std::getline
    std::string myString;
    std::cin >> myString; // Now “Strange”
    std::cout << myString << std::endl;
    std::cin >> myString; // Now ”stuff”
    std::cout << myString << std::endl;
    // Consume the newline
    std::getline(std::cin, myString);
    std::getline(std::cin, myString);
    // Now “  Strange stuff  “
    std::cout << myString << std::endl;
     */


    /* static_cast
    double costPerItem = 18.0 / 4;
    std::cout << "Double promotion: " << costPerItem << std::endl;
    //costPerItem = static_cast<double>(18) / 4;
    costPerItem = 18 / 4;
    std::cout << "No promotion: " << costPerItem << std::endl;
    */

    /* increments
    int growing = 2;
    std::cout << "Original: " << growing << std::endl;
    growing++;
    std::cout << "Now 3: " << growing << std::endl;
    growing += 5;
    std::cout << "Now 8: " << growing << std::endl;
    growing = growing + 5;
    std::cout << "Now 13: " << growing << std::endl;
    */

    /* double examples
    double pi = 3.14159;
    double quarter = .25;
    double myDouble = 1.23456;
    double three = 3;
    std::cout << three << std::endl;
    std::cout << std::fixed << std::setprecision(4) << myDouble << std::endl;
*/

    /* cout with embedded quotes
    std::cout << "\"Four score and seven years ago…\", said by Abraham Lincoln" << std::endl;
    */

    /* int wrapping
    int intToWrap = INT_MAX;
    std::cout << "Int max is " << intToWrap << std::endl;
    intToWrap++;
    std::cout << "Int is now " << intToWrap << std::endl;
     */


    /* Get a line of input */
    /*std::string text;
    std::cin >> text;
    std::cin >> text;
    std::cin >> text;
    std::cout << "Text is " << text << std::endl;
    std::getline(std::cin, text);
    std::cout << "Text is " << text << "After" << std::endl;*/

    /*int totalCost = 18;
    int numItems= 4;
    //double costPerItem = totalCost / numItems;
    double costPerItem = static_cast<double>(totalCost) / numItems;
    std::cout << costPerItem << std::endl;
    //std::cout << static_cast<int>(costPerItem) << std::endl;*/

    /*int myInt = 5;
    std::string myString = std::to_string(myInt);
    std::cout << myString << std::endl;*/



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
