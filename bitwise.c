#include <stdio.h>

// BITWISE OPERATORS

/*
& --> AND              #to result 1, all must be 1
| --> OR               #to result 1, if even one is 1
^ --> XOR              #to result 1, just one is 1
<< --> LEFT SHIFT      #shifts to the left and adding 0 at the beginning
>> --> RIGHT SHIFT     #shifts to the right and adding 0 at the end
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

    z = x << 1; // 00001110 --> 14
    printf("LEFT SHIFT 1 TIMES = %d\n", z);

    z = y << 3; // 10100000 --> 160
    printf("LEFT SHIFT 3 TIMES = %d\n", z);

    z = x >> 1; // 00000011 --> 3
    printf("LEFT RIGHT 1 TIMES = %d\n", z);

    z = y >> 2; // 00000101 --> 5
    printf("LEFT RIGHT 2 TIMES = %d\n", z);
}
