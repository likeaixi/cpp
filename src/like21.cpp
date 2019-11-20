 #include <stdio.h>
 #define PI 3.14159
    void main (   )
{ float r,L,S1,S2,V;
  scanf("%f",&r);
  L=2*PI*r;
  S1=PI*r*r;
  S2=4*PI*r*r;
  V=4.0/3.0*PI*r*r*r;
  printf("L=%.2f,S1=%.2f S2=%.2f, V=%.2f\n",L,S1,S2,V);
}
