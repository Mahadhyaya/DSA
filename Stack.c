#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1,stack[size];
void push(int[],int);
void display(int[]);
void pop(int[]);
void main()
{
int item,choice;
while(1)
{
printf("\nEnter stack operation: ");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\nEnter the item to be inserted: ");
	scanf("%d",&item);
	push(stack,item);
	break;
case 2:pop(stack);
	break;
case 3:display(stack);
	break;
case 4:exit(0);
	break;
default:printf("\nSelect The valid Number: ");
	break;
}
}
}
void push(int stack[],int item)
{
if(top==size-1)
{
printf("\nStack is full");
return;
}
top++;
stack[top]=item;
}
void pop(int stack[])
{
int d;
if(top==-1)
{
printf("\nStack is empty ");
return;
}
d=stack[top];
top--;
printf("\nItem %d is deleted",d);
}
void display(int stack[])
{
int i;
if(top==-1) 
{
printf("\nstack is empty ");
return;
}
printf("\nStack elements are: ");
for(i=0;i<=top;i++)
{
printf(" %d ",stack[i]);
}
} 
