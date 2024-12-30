#include<stdio.h>

int main()
{
    int marks[5];

    for(int i=0; i<5; i++)
    {
        printf("enter the value %d element of student marks",i );
        scanf("%d",&marks[i]);

    }



    for(int i=0; i<5; i++)
    {
        printf("the value of students marks is %d\n",marks[i]);
    }



    return 0;
}
