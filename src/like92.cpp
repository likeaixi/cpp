#include<process.h>
#include<stdio.h>
#define N 100
void main()
{ int i,j,n,k;
  int a[N],b[N];
  FILE *fp1,*fp2;
   if((fp1=fopen("C:\\intput.txt","r"))=NULL)
       {printf("File could not be opened!\n");
         exit(0);
       }
   if((fp2=fopen("C:\\input.txt","w"))=NULL)
       {printf("File could not be opened!\n");
        exit(0);
       }
       printf("please input n\n");
       scanf("%d",&n);
       i=0;
       while(!feof(fp1))
       {fscanf(fp1,"%d",a);
         i++;

       for(j=0;j<i;j++)
        {if(a[j]==n)
           k==j;
        printf("%d",k);


        }
       }
       fclose(fp1);
       fclose(fp2);
       
}
