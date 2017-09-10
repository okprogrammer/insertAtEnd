#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void InsertAtEnd(int x)
{
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp2 = head;
    temp->data = x;
    if(head==NULL)
    {
        temp->next=head;
        head=temp;
        return;
    }
    while(temp2->next!=NULL)
    {
        temp2 = temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}
void print()
{
    struct Node* temp = head;
    printf("print the list\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}

int main()
{
   struct Node* head = NULL;
   int n,x,i;
   printf("enter the number of elements\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&x);
       InsertAtEnd(x);
   }
   printf("print the linked list after insertion at the end\n");
   print();
   return 0;
}
