#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;

    char data[50];

    f = fopen("printtoFile.txt", "w");

    printf("Please enter data that you want to add txt file\n");

    do
    {
        gets(data);
        fprintf(f, "%s", data);
    } while (strlen(data));  //gets the data until ENTER

    fclose(f);
}