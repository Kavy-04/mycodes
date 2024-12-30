#include<stdio.h>

int main ()
{
    int marks[3][4]= {{52,45},{45,25,36,14}};

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<4; j++)
        {
            printf("%d\t",marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
