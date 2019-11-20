#include<process.h>
#include<stdio.h>
#define N 8
void main()
{char ch[N],c;
 int i,n;
 FILE *fp1,*fp2;
   fp1=fopen ("intput.txt","w");
   if(fp1==NULL)
       {printf("File could not be opened!\n");
         exit(0);
       }
   for(i=0;i<N;i++)
   { printf("please input s\n");
     scanf("%s",ch);
     fprintf(fp1,"%s\n",ch);
   }
   fclose(fp1);
     fp1=fopen("C:\\input.txt","r");
     n=0;
     printf("please input c\n");
     scanf("%c",&c);
   while(!feof(fp1));
     { fscanf(fp1,"%s",ch);
       for(i=0;i<N;i++)
          {if(ch[i]=='c')
           n++;
          }
     }
    fp2=fopen("C:\\result.dat","w");
    fprintf(fp2,"%d\n",n);
    fclose(fp1);
    fclose(fp2);
}
