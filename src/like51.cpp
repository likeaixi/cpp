#include<stdio.h>
#include<math.h>
#define N 15
 void main()
{int i,j,s,a[N],*p;
 double  k ;
  p=a;
  printf("输入15个自然数\n",N);
  for(i=0;i<N;i++,p++)
  scanf("%d",p);
  s=0;
  for(p=a;p<a+N;p++)
      {
       k=sqrt(*p);
       for(j=2;j<=k;j++)
           if(*p%j==0)break;
       if(j>k||*p!=1)
       s=s+*p;
      }
      printf("%d\n",s);
}
