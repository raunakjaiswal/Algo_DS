#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void insert_element(int d)  
{
  struct node* n;
  n = (struct node*)malloc(sizeof(struct node));
  n->data = d;
  n->next = NULL;
  if((r==NULL)&&(f==NULL))
  {
    f = r = n;
    r->next = f;
  }
  else
  {
    r->next = n;
    r = n;
    n->next = f;
  }
} 
void delete_element()  
{
  struct node* t;
  t = f;
  if((f==NULL)&&(r==NULL))
    printf("\nQueue is Empty");
  else if(f == r){
    f = r = NULL;
    free(t);
  }
  else{
    f = f->next;
    r->next = f;
    free(t);
  }
  printf("Element deleted.\n");
  
}
void display_queue(){  
  struct node* t;
  t = f;
  printf("Elements in queue : ");
  if((f==NULL)&&(r==NULL))
    printf("\nQueue is Empty");
  else{
    do{
      printf(" %d,",t->data);
      t = t->next;
    }while(t != f);
  }
  printf("\n");
}
int main()
{
  int opt,n,i,data;
  printf("List of choice:-\n");
  printf("1.Insert the Data in Queue   2.Display the Data of Queue  3.Delete the data from the Queue  4.Exit\n");
  do{
    printf("\nEnter Your Choice:  ");
    scanf("%d",&opt);
    switch(opt){
      case 1:
        printf("Enter the number of elements to be inserted in queue : ");
        scanf("%d",&n);
        printf("Enter your data:\n");
        i=0;
        while(i<n){
          scanf("%d",&data);
          insert_element(data);
          i++;
        }
        printf("Element inserted.");
        break;
      case 2:
        display_queue();
        break;
      case 3:
         delete_element();
        break;
      case 4:
        break;
      default:
        printf("\nIncorrect Choice");
      
    }
  }while(opt!=4);
return 0;
}
