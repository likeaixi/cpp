#include<stdio.h>
  void main(  )
 {int i,j;
   for(i=1;i<=4;i++)
    {
    for(j=1;j<=2*i-1;j++)
      printf("%c",64+i);
      printf("\n");
    }
   for(i=3;i>=1;i--)
   {for(j=1;j<=2*i-1;j++)
    printf("%c",64+i);
      printf("\n");
    }
 }

