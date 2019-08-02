#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
char data;
struct stack *next;
};
struct stack *top;
void initstack( )
{
top=(struct stack *)malloc(sizeof (struct stack));
top=NULL;
}


int isempty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
void push(int no)
{
	struct stack *newnode=NULL;
	newnode=(struct stack *)malloc(sizeof (struct stack));
	newnode->data=no;
	newnode->next=NULL;
		if(top==NULL)
			top=newnode;
		else
		{
			newnode->next=top;
		top=newnode;
		}
}
int pop()
{
	int no;
	struct stack *temp=NULL;
	if(isempty())
	{
		printf("\nstack is empty");
		return 0;
	}
	else
	{
	no=top->data;
	temp=top;
	top=top->next;
	return no;
	}
}
void display()
{

	struct stack *temp;
	temp=top;
	while(temp!=NULL)
	{
       printf("%c",temp->data);
		temp=temp->next;
	}


getch();
}