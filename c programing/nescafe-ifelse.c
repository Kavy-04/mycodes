#include<stdio.h>
int main ()
{
    int age;

    printf("enter the age\n ");
    scanf("%d",&age);

    printf("age is %d\n",age);

    if(age>=18){
        printf("you can vote");
    }
    else if(age>10)
        {
        printf("you can vote for chid");
    }
    else if (age>3){
        printf("you can vote for babies");
    }else{
    printf("you cannot vote");
    }
}
