#include <stdio.h>

int main()
{
    FILE *f1, *f2;
    char data;

    f1 = fopen("copyFile.txt", "w");

    f2 = fopen("fileToCopy.txt", "r");

    data = fgetc(f2);
    while (data != EOF)
    {
        putc(data, f1);
        data = fgetc(f2);
    }

    fclose(f1);
    fclose(f2);
}