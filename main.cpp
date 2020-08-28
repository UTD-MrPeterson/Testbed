#include <assert.h>
#include <iostream>
using namespace std;

int getIthFibNumberIter(int fibNumber) {
    // Fibonacci numbers 1 and 2 are 1
    if ( fibNumber <= 2) {
        return 1;
    }

    int nMinus1 = 1;
    int currentFib = 1;
    for ( int i=3; i<=fibNumber; i++) {
        int temp = currentFib;
        currentFib += nMinus1;
        nMinus1 = temp;
    }
    return currentFib;
}

int getIthFibNumberRecur(int fibNumber) {
    // Fibonacci numbers 1 and 2 are 1
    if ( fibNumber <= 2) {
        return 1;
    }
    return getIthFibNumberRecur(fibNumber-1) +
           getIthFibNumberRecur(fibNumber-2);
}

int& fallOffTheStack(const int value) {
    int myVal = value;
    cout << "Returning reference to " << value << endl;
    return myVal;
}

void swapWithoutTemp(int first, int second) {
    int myArray[2];
    myArray[0] = first;
    myArray[1] = second;
    myArray[0] += myArray[1];
    myArray[1] = myArray[0] - myArray[1];
    myArray[0] -= myArray[1];

    assert(myArray[0]==second);
    assert(myArray[1]==first);
}

int main() {
    // swapWithoutTemp
    char myCharArray[5] = {'a', 'b', 'c', 'd', '\0'};
    char* myOtherCharArray = "abcd";

    cout << myCharArray << endl << myOtherCharArray << endl;

    swapWithoutTemp(4000000000, 1999999999);
    swapWithoutTemp(50, 51);
    swapWithoutTemp(-1, -4);


    int& willChange = fallOffTheStack(5);
    cout << "Was " << willChange << endl;
    fallOffTheStack(10);
    cout << "Now " << willChange << endl;

    assert(getIthFibNumberIter(2) == 1);
    assert(getIthFibNumberRecur(2) == 1);

    assert(getIthFibNumberIter(3) == 2);
    assert(getIthFibNumberRecur(3) == 2);

    assert(getIthFibNumberIter(4) == 3);
    assert(getIthFibNumberRecur(4) == 3);

    assert(getIthFibNumberIter(5) == 5);
    assert(getIthFibNumberRecur(5) == 5);

    assert(getIthFibNumberIter(20) == 6765);
    assert(getIthFibNumberRecur(20) == 6765);

    return 0;
}
