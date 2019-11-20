 #include <stdio.h>
 void main(  )
 {int i,n;
  float s,t;
   s=1;
   t=1;
  printf("plase input n\n");
  scanf("%d",&n);
  for(i=3;i<=2*n-1;i+=2)
   {t=-t/(i-1)/i;
    s=s+t;
   }
    printf("%f\n",s);
 }

