 #include<stdio.h>
#define N 128
void main()
{ int i;
  char s[N],*p;
  p=s;
  printf("�����ַ���\n");
  scanf("%s",s);
   if((s[0]>=65&&s[0]<=90)||(s[0]>=97&&s[0]<=122)||s[0]==95)
   {
   for(i=1;i<=N;i++)
       if(!((s[i]>=48&&s[i]<=57)||(s[i]>=65&&s[i]<=90)||s[i]==95||(s[i]>=97&&s[i]<=122)))
         break;
       if(i<=N)
          printf("�Ϸ�\n");
       else
          printf("���Ϸ�\n");
    }
  else
          printf("���Ϸ�\n");
}

