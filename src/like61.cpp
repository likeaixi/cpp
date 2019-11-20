#include<stdio.h>
int jfnum(int m);
void main()
  {int i;
     for(i=100;i<=999;i++)
       {jfnum(i);
       if(jfnum(i)==1)
        printf("%d\n", i);
        }
  }
int jfnum(int m)
  {int a ,b ,c ;
    c=(m%10);
    b=(m%100-c)/10;
    a=(m-b*10-c)/100;
   if(m==c*c*c+b*b*b+a*a*a)
      return(1);
    else return(0);
   }

