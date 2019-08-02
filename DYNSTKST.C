#include<stdio.h>
#include<conio.h>
#include"dynstk.c"
void rev_string()
{
char array[100];
int i=0,data,item;
clrscr();
printf("string elements end with $\n");
gets(array);
	do
	{
		push(array[i]);
		i++;
	}while(array[i]!='\0');
	printf("\nstring reverse is \n");
	display();
}
void main()
{
	int ch,no;
	clrscr();
	initstack();
	do
	{
	printf("\n1.push");
	printf("\n2. pop");
	printf("\n3. display");
	printf("\n4. reverse string");
	printf("\n5. exit");
	printf("\nenter choice:-");
	scanf("%d",&ch);

		switch(ch)
		{
		case 1:printf("enter data to be pushed");
			scanf("%d",&no);
			push(no);
			break;
		case 2: printf("\n popped data %d",pop());
			break;
		case 3:display();
			break;
		case 4:rev_string();
		       break;
		case 5:exit(0);
		}
	}while(ch!=3);
}