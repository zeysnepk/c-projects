#include <stdio.h>
#include <math.h>

// BITWISE OPERATORS

/*
& --> AND              #to result 1, all must be 1
| --> OR               #to result 1, if even one is 1
^ --> XOR              #to result 1, just one is 1
<< --> LEFT SHIFT      #shifts to the left and adding 0 at the beginning // equals multiplied by 2^rightoperand
>> --> RIGHT SHIFT     #shifts to the right and adding 0 at the end // equals divided by 2^rightoperand
*/

int main()
{
    int x = 7;  // 00000111
    int y = 20; // 00010100
    int z = 0;

    z = x & y; // z --> 00000100 --> 4
    printf("AND = %d\n", z);

    z = x | y; // z --> 00010111 --> 23
    printf("OR = %d\n", z);

    z = x ^ y; // z --> 00010011 --> 19
    printf("XOR = %d\n", z);

    z = x << 1; // 00001110 --> 14 or 7 x 2^1 = 14
    printf("LEFT SHIFT 1 TIMES = %d\n", z);

    z = y << 3; // 10100000 --> 160 or 20 x 2^3 = 160
    printf("LEFT SHIFT 3 TIMES = %d\n", z);

    z = x >> 1; // 00000011 --> 3 or 7 / 2^1 = 3
    printf("LEFT RIGHT 1 TIMES = %d\n", z);

    z = y >> 2; // 00000101 --> 5 or 20 / 2^2 = 5
    printf("LEFT RIGHT 2 TIMES = %d\n", z);

    printf("complement=%d\n", ~35);
    printf("complement=%d\n", ~-12);

    char lights = 0x27;
    char mask = 0x1;
    mask <<= 2;
    if (lights & mask)
        puts("turned on");
    else
        puts("turned off");

    mask = 0xfb;
    lights &= mask;
    printf("%x\n", lights);

    unsigned a, m;
    int k;
    scanf("%d", &a);
    printf("\na=%x and a=%d\n\n", a, a);
    printf("\n\n");

    m = 0x0080;
    for (k = 8; k > 0; k--)
    {
        if (a & m)
        {
            printf("1");
        }

        else

        {
            printf("0");
        }
        m = m >> 1;
    }
    printf("\n\n");

    // An Example for bitwise operators that a program to convert Binary number to Decimal number

    int num, bin = 0, binex = 00000001, i = 0;

    printf("Enter a number in Binary: ");
    scanf("%d", &num);

    while (i < 8)
    {
        if (binex & num)
        {
            bin += pow(2, i);
        }
        i++;
        binex <<= 1;
    }
    printf("Decimal Form = %d\n", bin);

    // An Example for bitwise operators that a program to convert decimal to binary number and count trailing zeros in a binary number for 8 bits

    int userNum, zeros = 0;

    printf("Enter any number: ");
    scanf("%d", &userNum);

    printf("The Binary Code= ");
    for (i = 7; i >= 0; i--)
    {
        if (userNum >= pow(2, i) && userNum != 0)
        {
            userNum -= pow(2, i);
            printf("1 ");
            zeros = 0;
        }
        else
        {
            printf("0 ");
            zeros++;
        }
    }

    printf("\nTotal number of trailing zeros is %d\n", zeros);
}
