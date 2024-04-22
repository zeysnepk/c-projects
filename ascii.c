#include <stdio.h>
#include <ctype.h>

int main()
{
    int i;
    char c;

    for(i=32;i<=127;i++)
    {
        c=i;
        if(isdigit(c) == 1)
        {
            printf("%c is a digit\n",c);
        }
        else
        printf("%c is not a digit\n",c);
        if(isalpha(c) == 1)
        {
            printf("%c is a letter\n",c);
        }
        else
        printf("%c is not a letter\n",c);
        if(isalnum(c) == 1)
        {
            printf("%c is digit or letter\n",c);
        }
        else
        printf("%c is not digit or letter\n",c);
        if(isxdigit(c) == 1)
        {
            printf("%c is a hexadecimal digit\n",c);
        }
        else
        printf("%c is not a hexadecimal digit\n",c);
        if(islower(c) == 1)
        {
            printf("%c is a lowercase letter\n",c);
        }
        else
        printf("%c is not a lowercase letter\n",c);
        if(isupper(c) == 1)
        {
            printf("%c is a uppercase lettern",c);
        }
        else
        printf("%c is not a uppercase letter\n",c);
        if(isspace(c) == 1)
        {
            printf("%c is a white-space character\n",c);
        }
        else
        printf("%c is not a white-space character\n",c);
        if(iscntrl(c) == 1)
        {
            printf("%c is a control character\n",c);
        }
        else
        printf("%c is not a control character\n",c);
        if(ispunct(c) == 1)
        {
            printf("%c is a punctuation character\n",c);
        }
        else
        printf("%c is not a punctuation character\n",c);
        if(isprint(c) == 1)
        {
            printf("%c is a printing character including space\n",c);
        }
        else
        printf("%c is not a printing character including space\n",c);
        if(isgraph(c) == 1)
        {
            printf("%c is a printing character other than space\n",c);
        }
        else
        printf("%c is not a printing character other space\n",c);
        printf("\n");
    }
}