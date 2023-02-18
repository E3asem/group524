
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *next;
} node;

node* head=NULL;

void create(int v)
{
    node *newNode = (node*)malloc(sizeof(node));

    newNode->value=v;
    newNode->next=NULL;

    node* ptr=head;

    if(head == NULL)
        head=newNode;

    else
    {
        while(ptr->next != NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;

    }




}

void display()
{
    node* ptr=head;
            printf("\n");

    while(ptr != NULL)
    {
        printf("%d ",ptr->value);
        ptr=ptr->next;

    }
            printf("\n");




}

void search(int val)
{
    int counter=0;
    node* ptr=head;

    while(ptr != NULL)
    {

        if(ptr->value == val)
        {

            printf("found at node %d ",counter);
            return;
        }

        counter++;
        ptr=ptr->next;
    }


    printf("not exist");


}



void Delete(int val)
{
    node* prev=head;
    node* curr=head;


    while(curr != NULL)
    {
        if(curr->value==val)
        {

            if(curr==prev)
            {
                head=head->next;
                free(curr);
                return;
            }
            else
            {
                prev->next=curr->next;
                free(curr);
                return;
            }
        }
        prev=curr;
        curr=curr->next;
    }

    printf("not exist");

}





int main()
{

    create(10);
    create(20);
    create(30);

    create(500);
   // Delete(500);
    display();

    search(10);
    display();




}
