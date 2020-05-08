#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START=NULL;
struct node *createnode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertnode()
{
    struct node *temp,*t;
    temp=createnode();
    printf("enter the number :");
    scanf("%d",&temp->info);
    if(START==NULL)
        START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
            t=t->link;
        t->link=temp;
    }
}

  void main()
  {
      int a,i;
      printf("enter the number of entries you want to enter :");
      scanf("%d",&a);
      for(i=1;i<=a;i++)
      {
          insertnode();
      }
      viewlist();
        }
  void viewlist()
  {
      struct node *t;
      t=START;
      if(t=NULL)
        printf("list is empty");
      else
      {
          while(t->link!=NULL)
            scanf("%d",&t->info);
            t=t->link;
      }
  }


