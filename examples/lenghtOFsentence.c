#include <stdio.h>
#include <string.h>

/*
Write a program in C to find the length of a sentence.
In the main function
- Define an array called as “arr” with 100 that is entered by the user.
- You must NOT use any string functions.
- You must use the function gets for the input.
- Invoke a function called as “FindStr” that computes the length of the given string.
In the Function;
- No return any values from the function. The function must have only a parameter
- Not use any array variable and only one variable.
- You must use only WHILE loop.
- The result is displayed as “ The length of “
*/

void FindStr(char[]);

int main()
{
    char arr[100];

    printf("Enter a sentence:\n");
    gets(arr);

    FindStr(arr);
}

void FindStr(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }

    printf("The lenght of '%s' = %d\n",arr,i);
}