#include<stdio.h>
#define max 10
int stack[max];
int top=-1,item;
void pop()
{
    if(top==-1)
{
    printf("Stack is empty\n");
}
else
{
  stack[--top]=item;
  printf("Item is %d\n",item);
}
}
void push()
{
    if (top==max)
    {
    printf"Stack is full;Cannot add!\n");
    }
    else
    {
        stack[++top]=item;
    }
}
void disp()
{
     if(top==-1)
{
    printf("Stack is empty\n");
}
else
{
  printf"Stack elements:\n");
  for(i=0;i<n;i++)
  {
      printf("%d\n",stack[i]);
  }
}
}
void main()
{
    int choice,i;
    int top=-1;
    printf("Menu Items:\n .Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    printf"Enter your choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter the items:\n");
            scanf("%d",&item);
            push(item);
            break;
        }
    case 2:
        {
            printf("Enter the item to pop:\n");
            scanf("%d",&item);
            pop(item);
            break;
        }
    case 3:
        {
            display();
            break;
        }
        case 4:printf("Exit\n");
        exit(0);
        default: printf("Invalid Choice:\n");
    }

}
