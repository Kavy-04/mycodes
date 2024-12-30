#include<stdio.h>

 int main()
 {
     int twod_array[3][3];

     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("enter a[%d][%d]",i,j);
             scanf("%d",&twod_array[i][j]);
         }
     }

      for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("%d\t",twod_array[i][j]);
         }
         printf("\n");
     }
     return 0;
 }


