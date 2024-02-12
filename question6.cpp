//A program that counts the number of vowels in a sentence.

#include <stdio.h>
#include <stdbool.h>

int countWords(const char* sentence)
 {
    int wordCount = 0;
    bool inWord = false;

    while (*sentence != '\0') 
{
        // Check if the current character is a whitespace
        if (*sentence == ' ' || *sentence == '\t' || *sentence == '\n')
 {
            inWord = false;
        } 
        // Check if the current character is part of a word
        else if (!inWord)
 {
            inWord = true;
            wordCount++;
        }

        sentence++;
    }

    return wordCount;
}

int main()
 {
    // Example usage:
    char inputSentence[100];

    // Taking input from the user
    printf("Enter a sentence: ");
    fgets(inputSentence, sizeof(inputSentence), stdin);

    int wordCount = countWords(inputSentence);

    printf("Number of words in the sentence: %d\n", wordCount);

    return 0;
}