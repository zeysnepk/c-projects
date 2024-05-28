#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char arr[100];
    char *Ptr;
    int i = 0, wordCount = 0;

    printf("Enter a sentence:\n");
    gets(arr);

    for(i=0; i<strlen(arr);i++)
    {
        if(isspace(arr[i]))
        {
            wordCount++;
        }
    }

    char *copyArr[50];

    Ptr  = strtok(arr, " ");
    copyArr[wordCount] = Ptr;

    i=1;
    while (Ptr)
    {
        Ptr = strtok(NULL, " ");
        copyArr[wordCount - i] = Ptr;
        i++;
    }

    for(i=0;i<=wordCount;i++)
    {
        printf("%s ",copyArr[i]);
    }



    

}