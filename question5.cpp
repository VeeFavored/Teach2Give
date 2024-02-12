//A program that takes an integer as input and returns an integer with reversed digit
ordering.

#include <iostream>

int reverseDigits(int num)
 {
    int reversedNum = 0;
    while (num != 0)
 {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main()
 {
    // Example usage:
    int input;
    
    // Taking input from the user
    std::cout << "Enter an integer: ";
    std::cin >> input;

    int output = reverseDigits(input);

    std::cout << "Reversed digit ordering: " << output << std::endl;

    return 0;
}
