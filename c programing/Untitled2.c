#include<stdio.h>
int main ()
{
    int choise;
       int a,b,sum,sub,multiply,division;

    printf("1.sam\n 2.substract\n 3.multiplication\n 4.division\n");
    printf("enter your choise\n");
    scanf("%d",&choise);

    switch(choise)
    {
    case 1:
        printf("enter your a\n",a);
        scanf("%d",&a);
        printf("enter your b\n",b);
        scanf("%d",&b);

        sum=a+b;
        printf("sum is %d",sum);
        break;

    case 2:
        printf("enter your a\n",a);
        scanf("%d",&a);
        printf("enter your b\n",b);
        scanf("%d",&b);

        sub = a-b;
        printf("sub is %d",sub);
        break;
     case 3:
        printf("enter your a\n",a);
        scanf("%d",&a);
        printf("enter your b\n",b);
        scanf("%d",&b);

        multiply = a*b;
        printf("sub is %d",multiply);
        break;
     case 4:
        printf("enter your a\n",a);
        scanf("%d",&a);
        printf("enter your b\n",b);
        scanf("%d",&b);

        division = a/b;
        printf("sub is %d",division);
        break;
    default:
        printf("invalid choise");
    }
    return 0;
}
