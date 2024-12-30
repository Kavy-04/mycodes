#include<stdio.h>

struct student{
    char name[50];
    double number ;
    float persentage;
};

int main()
{
    struct student s1;
    printf("enter the student name\n");
    scanf("%s",s1.name);
    printf("student name is: %s\n\n",s1.name);

    printf("enter the mobile number\n");
    scanf("%lf",&s1.number);
    printf("mobile number is %lf\n\n",s1.number);

    printf("enter the persentage\n");
    scanf("%f",&s1.persentage);
    printf("persentage is :%f\n\n",s1.persentage);

    struct student s2;
    printf("enter the student name\n");
    scanf("%s",s2.name);
    printf("student name is: %s\n\n",s2.name);

    return 0;
}
