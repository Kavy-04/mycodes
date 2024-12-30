#include <stdio.h>

int main()
{

    int num,i;
    printf("enter the number for print a multitable number\n");
    scanf("%d",&num);

    for(i=0;i<10;i++)
    {
        printf("%d * %d=%d\n",num,i+1,num*(i+1));
    }

	return 0;
}
