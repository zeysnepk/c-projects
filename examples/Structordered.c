#include <stdio.h>

/*
Write a C program whose description and functionality is given below.
Note That:
• Define a structure called “PupilRec“ that will describe the following information:
fName and fMark.
• fName is a variable with a length of 50 characters in a char data type.
• fMark is an integer variable.
• In the main function, using “PupilRec“, declare and initialize an array named
“players” with 4 elements that includes these elements “Armstrong 99 Azur
64 Bates 33 Zarra 81”.
• Define a function called as “MakeOrdered” that sorts the array defined with the
structure in ascending order according to “fMark” and No returns any value.
• Display the elements of the sorted array structured with “PupilRec” in the
function “MakeOrdered”.
• You must use only FOR loop.
*/

struct PupilRec
{
    char fName[50];
    int fMark;
};

void MakeOrdered(struct PupilRec[]);

int main()
{
    struct PupilRec players[4] = {{"Armstrong", 99},{"Azur", 64},{"Bates", 33},{"Zarra", 81}};

    MakeOrdered(players);
}

void MakeOrdered(struct PupilRec Orderedplayers[])
{
    int i,j;
    struct PupilRec temp;
    

    for(i=0; i<4; i++)
    {
        for(j=i+1; j<4; j++)
        {
            if(Orderedplayers[i].fMark > Orderedplayers[j].fMark)
            {
                temp = Orderedplayers[j];
                Orderedplayers[j] =  Orderedplayers[i];
                Orderedplayers[i] = temp;
            }
        }
        printf("%s  %d\n",Orderedplayers[i].fName,Orderedplayers[i].fMark);
    }
}