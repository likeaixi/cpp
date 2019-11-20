#include<stdio.h>
void main()
{
 int year,month,day1,day2;
 scanf("%d%d",&year,&month);
 if(year%4==0&&year%100!=0||year%400==0)
   day1=366;
 else
   day1=365;
 switch(month)
 { case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12:day2=31;break;
   case 4:
   case 6:
   case 9:
   case 11:day2=30;break;
   case 2:if(day1==366) day2=29;
           else day2=28;break;}
   printf("该月有%d天\n",day2);
}
