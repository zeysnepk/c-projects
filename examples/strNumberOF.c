#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Write a C program to find the number of letters, digits and words in a
given sentence.
- Define an array called as “arr” with 100 for the sentence that is entered by the
user.
- You must NOT use the function “scanf” for the input.
- You must use only one WHILE loop.
- You must use only the string functions for finding the letter, digit, word or length
of the given sentence.
*/
int main()
{

    char arr[100];
    int lettersCount = 0, digitsCount = 0, wordsCount = 1;
    int i = 0;

    printf("Enter a sentence:\n");
    gets(arr);

    while (i < strlen(arr))
    {
        if (isalpha(arr[i]))
        {
            lettersCount++;
        }
        if (isdigit(arr[i]))
        {
            digitsCount++;
        }
        if (isspace(arr[i]))
        {
            wordsCount++;
        }

        i++;
    }

    printf("\nLetters = %d\nDigits = %d\nWords = %d\n", lettersCount, digitsCount, wordsCount);
}