#include<stdio.h>
#include<ctype.h>
char infix[30],postfix[30];
int top=-1;
char stack[30];

void push(char symbol)
{

stack[++top]=symbol;
}

char pop()
{
char symbol;
symbol=stack[top--];
return symbol;
}

int preced(char symbol)
{
switch(symbol)
{
case '$' : return -1;
case '(' :return 0;        
case '+' :
case '-' :return 1;	   
case '*' :
case '/' :
case '^' :return 2;	   
}
}

void InfixToPostfix()
{
int i=0,k=0;
char symbol,opnd;
while((symbol=infix[i++])!='\0')
{
if(symbol=='(')
push(symbol);
else if(symbol==')')
{
while(stack[top]!='(')
postfix[k++]=pop();
opnd=pop();
}
else if(isalnum(symbol))
postfix[k++]=symbol;
else 
{
while(preced(symbol)<=preced(stack[top]))
{
postfix[k++]=pop();
}
push(symbol);
}
}
while(stack[top]!='$')
{
postfix[k++]=pop();
}
}
void main()
{
printf("\n Enter the infix expression: ");
scanf("%s",infix);
push('$');
InfixToPostfix();
printf("The postfix expression is %s:\n",postfix);
}
