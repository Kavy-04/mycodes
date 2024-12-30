#include<stdio.h>

int main()
{
    char input;
    float kmstomiles =10.265;
    float inchestofoot=11.265;
    float cmstoinches=9.265;
    float poundtokgs=8.659;
    float inchestometers=7.896;
    float first,second;

    while(1)
    {
        printf("enter the character of \n");
        scanf("%c",&input);
        //break;
       // printf("the charater is %c\n",input);



    switch(input)
    {
    case '0':
        printf("the quiting the program");
        break;

    case '1':
        printf("enter the first element of\n");
        scanf("%f",&first);
        second=first*kmstomiles;
        printf("%f kms to convert of miles is %f\n",first,second);
        break;

    case '2':
        printf("enter the first element of\n");
        scanf("%f",&first);
        second=first*inchestofoot;
        printf("%f inches to convert of foot is %f\n",first,second);
        break;

    case '3':
        printf("enter the first element of\n");
        scanf("%f",&first);
        second=first*cmstoinches;
        printf("%f cms to convert of inches is %f\n",first,second);
        break;


    case '4':
        printf("enter the first element of\n");
        scanf("%f",&first);
        second=first*poundtokgs;
        printf("%f pound to convert of kgs is %f\n",first,second);
        break;

    case '5':
        printf("enter the first element of\n");
        scanf("%f",&first);
        second=first*inchestometers;
        printf("%f inches to convert of meters is %f\n",first,second);
        break;

        default:printf("invailid choise");
                break;
    }
    }

}
