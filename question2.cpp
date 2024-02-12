//A program to generate the Fibonacci sequence up to 100.

#include <iostream>
using namespace std;
int main()
 {
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
    nextTerm = t1 + t2;
    while (nextTerm <= 100)
 {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    return 0;
}
