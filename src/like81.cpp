#define LEN sizeof(struct student)
#include<stdlib.h>
#include<stdio.h>
struct student *create (int n);
struct student
{ int num;
  char name[];
  char sex;
  int age;
  struct student *next;
};
void main()
{ int n,n1,n2;
  struct student *head,*p;
    printf("please input n\n");
    scanf("%d",&n);
    head=create(n);
    p=head;
 while(p!=NULL)
 {  if(p->sex=='F')
     n1++;
    else n2++;
  }
    printf("%f",n1/n2);
 }
 struct student *create (int n)
 {  int i;
    struct student *head=NULL,*p1,*p2;
    head=p2=( struct student *)malloc(LEN);
     scanf("%d",&p2->num);
     scanf("%s",&p2->name);
     fflush(stdin);
     scanf("%c",&p2->sex);
     scanf("%d",&p2->age);
  for(i=2;i<=n;i++)
    {  p1=( struct student *)malloc(LEN);
       scanf("%d",&p1->num);
       scanf("%s",&p1->name);
       fflush(stdin);
       scanf("%c",&p1->sex);
       scanf("%d",&p1->age);
       p2->next=p1;
       p2=p1;
    }
    p2->next=NULL;
       return(head);

}
