//A program that takes an integer as input and returns true if the input is a power of two.

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
 {
    if (n <= 0)
 {
        return false;
    }
    return (n & (n - 1)) == 0;
}

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPowerOfTwo(number)) 
{
        cout << "True" << endl;
    }
 Else
 {
        cout << "False" << endl;
    }
    return 0;
}
