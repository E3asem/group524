
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX],top=-1;

void push(void)
{
    int x;
    if(top==MAX-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        printf("enter number\n");
        scanf("%d",&x);
        stack[++top]=x;
    }

}
void pop(void)
{

    if(top<0)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("poped element %d\n",stack[top]);
        top--;
    }

}
void display (void)
{
    int i;
    if(top>-1)
    {
        for(i=top; i>=0; i--)
        {

            printf("%d ",stack[i]);

        }
    }
    else
    {

        printf("stack is empty");

    }

}


int main()
{
    int choice;
    do{
    printf("1-push 2-pop 3-display 4-exit\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
   case 4:
    printf("exit");
    exit(0);
        break;
    default:
        printf("enter valid number");

    }
    }while(choice<5);
}





