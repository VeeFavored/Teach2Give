//A program that accepts a string as input, capitalizes the first letter of each word in the
string, and then returns the result string.

#include <iostream>
#include <cctype>

std::string capitalizeFirstLetter(const std::string& input)
 {
    std::string result = input;

    // Capitalize the first letter of the string
    if (!result.empty())
 {
        result[0] = std::toupper(result[0]);
    }

    // Iterate through the string and capitalize the first letter of each word
    for (std::size_t i = 1; i < result.length(); ++i)
 {
        if (std::isspace(result[i - 1]))
 {
            result[i] = std::toupper(result[i]);
        }
    }

    return result;
}

int main()
 {
    std::string input;

    // Get input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    // Capitalize the first letter of each word
    std::string result = capitalizeFirstLetter(input);

    // Display the result
    std::cout << "Capitalized: " << result << std::endl;

    return 0;
}
