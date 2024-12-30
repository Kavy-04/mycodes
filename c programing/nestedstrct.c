#include<stdio.h>

typedef struct emploee{
    char name[20];
    int emp_id;
    int emp_salary;
}emp;

 typedef struct organization{
      int organization_name[20];
      int organization_number;
  }org;

int main()
{
   emp e1;
   org o1;

    printf("enter the emploee name\n");
    scanf("%s",e1.name);
    printf("student name is: %s\n\n",e1.name);

    printf("enter the organization name\n");
    scanf("%s",o1.organization_name);
    printf("organization name is: %s\n\n",o1.organization_name);
}
