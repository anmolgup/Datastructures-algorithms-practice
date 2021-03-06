#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* next;
};
struct node* push(struct node* last,int num)
{
  if(last==NULL)
        return addToBegin(last,num);

  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = num;
  temp->next = last->next;
  last->next = temp;
  return last;
}
int main()
{
    struct node* last = NULL;
    last = push(last,4);
    last = push(last,3);
    show(last);
}
void show(struct node* last)
{
    if(last==NULL)
        printf("empty");
  struct node* p;
  p = last->next;
  do{
    printf(" %d ",p->data);
    p = p->next;
  }while(p != last->next);
}
void addToBegin(struct node* last, int num)
{
  if(last!=NULL)
    return;
  struct node* temp = (struct node*)malloc(sizeof(struct node));
  temp->data = num;
  last = temp;
  temp->next = last;
}
