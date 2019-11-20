#define LEN sizeof(struct basket)
#include<stdlib.h>
#include<stdio.h>
struct basket *create (int n);
struct basket
{ char name[];
  int num;
  int total;
  int win;
  struct basket *next;
};
void main()
{ int n;
  struct basket *head,*p1,*p2;
    printf("please input n\n");
    scanf("%d",&n);
    head=create(n);
    p1=head;
 while(p1!=NULL)
 {  if(p1->win<p1->total/2)
    {if(p1==head)
        head=p1->next;
        else p2->next=p1->next;
        free(p1);
        p1=p2->next;
    }

    else printf("NO");
  }
}
struct basket *create (int n)
{  int i;
    struct basket *head=NULL,*p1,*p2;
    head=p2=( struct basket *)malloc(LEN);
     scanf("%s",&p2->name);
     fflush(stdin);
     scanf("%d",&p2->num);
     scanf("%d",&p2->total);
     scanf("%d",&p2->win);
  for(i=2;i<=n;i++)
    {  p1=( struct basket *)malloc(LEN);
       scanf("%s",&p1->name);
       fflush(stdin);
       scanf("%d",&p1->num);
       scanf("%d",&p1->total);
       scanf("%d",&p1->win);
          p2->next=p1;
          p2=p1;
    }
       p2->next=NULL;
       return(head);
}

