#include<stdio.h>

int printAddnum()
{
    int a,b;
    int sum;

    printf("enter the number of a\n");
    scanf("%d",&a);
    printf("enter the number of b\n");
    scanf("%d",&b);

    sum=a+b;
    printf("sum is %d\n ",sum);

    return 0;
}
int printstar(int n)
{
    for(int i=0;i<n;i++){

        printf("%c\n",'*');
    }

    return 0;
}
int main (){

   printAddnum();
    printstar(10);



   return 0;


}

