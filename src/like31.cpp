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
 {case 1:printf("���ַ�������");break;
  case 2:printf("���ַ��Ǵ�д��ĸ");break;
  case 3:printf("���ַ���Сд��ĸ");break;
  default: printf("���ַ��������ַ�");
 }
}
