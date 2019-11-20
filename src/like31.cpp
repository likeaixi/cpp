#include<stdio.h>
void main()
{char ch;int a;
 printf("Input a character: ");
 scanf("%c",&ch);
 if(ch>=48&&ch<=57)
  a=1;
  else if( ch>=65&&ch<=90)
  a=2;
  else if( ch>=97&&ch<=122)
  a=3;
 switch(a)
 {case 1:printf("该字符是数字");break;
  case 2:printf("该字符是大写字母");break;
  case 3:printf("该字符是小写字母");break;
  default: printf("该字符是其他字符");
 }
}
