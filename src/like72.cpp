#include<stdio.h>
#define  N 3
void input(struct teacher s[],int n);
float ps(struct teacher S[],int n);
struct teacher
{int num;
 char name[10];
 float score[4];
};
void main()
{struct teacher S[N];

 int i;
 input(S,N);
 for(i=0;i<N;i++)
 S[i].score[3]=S[i].score[0]*60/100+S[i].score[1]*30/100+S[i].score[2]*10/100;
 ps(S,N );
 if(i=0||1)
    printf("%d %s %c",S[i].num,S[i].name,'A');
 if(i=2||3||4||5||6||7||8)
    printf("%d %s %c",S[i].num,S[i].name,'B');
 if(i=9)
    printf("%d %s %c",S[i].num,S[i].name,'C');

}
void input( struct teacher S[],int n)
{int i;
  printf("请输入10名老师的工号，姓名，教学分，科研分，管理分\n");
 for(i=0;i<n;i++)
 {scanf("%d",&S[i].num);
  scanf("%s",S[i].name);
  fflush(stdin);
  scanf("%f %f %f",&S[i].score[0],&S[i].score[1],&S[i].score[2]);
  printf("\n");
 }
}
float ps( struct teacher S[],int n)
{struct teacher t ;
  int i,j;

  for(i=0;i<n-1;i++)
   for(j=0;j<n-i-1;j++)
   if(S[j].score[3]<S[j+1].score[3])
   {t=S[j];
    S[j]=S[j+1];
   S[j+1]=t;
   }
 }


