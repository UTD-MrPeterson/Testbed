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
    return getIthFibNumberRecur(fibNumber-2) + getIthFibNumberRecur(fibNumber-1);
}

int& fallOffTheStack(const int value) {
    int myVal = value;
    return myVal;
}

int main() {
    int& willChange = fallOffTheStack(5);
    cout << "Was " << willChange << endl;
    fallOffTheStack(10);
    cout << "Now " << willChange << endl;
    
    assert(getIthFibNumberIter(2) == 1);
    assert(getIthFibNumberRecur(2) == 1);

    assert(getIthFibNumberIter(3) == 2);
    assert(getIthFibNumberRecur(3) == 2);

    assert(getIthFibNumberIter(4) == 3);
    assert(getIthFibNumberIter(4) == 3);

    assert(getIthFibNumberIter(5) == 5);
    assert(getIthFibNumberIter(5) == 5);

    assert(getIthFibNumberIter(20) == 6765);
    assert(getIthFibNumberIter(20) == 6765);

    return 0;
}
