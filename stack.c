#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node *next;
};
struct node *new;
struct node *top;
struct node *ptr;
void main()
{
	int option,data;
	do
	{
	printf("\nEnter your option\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		{
		push();
		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		display();
		break;
		}
		case 4:
		{
		exit;
		}
	}
	}
	while(option!=4);
}
void push()
{
	new=(struct node*) malloc(sizeof(struct node));
	printf("Enter the data to be Inserted: \t");
	scanf("%d",&new->data);
	new->next=top;
	top=new;
}
void pop()
{
	ptr=top;
	if(ptr==NULL)
	{
	printf("Stack UNDERFLOW..... \n");
	}
	else
	{
	printf("Item to be POPED %d",top->data);
	top=top->next;
	}
	free(ptr);
}
void display()
{
	ptr=top;
	while(ptr!=NULL)
	{
		printf("STACK :%d\n",ptr->data);
		ptr=ptr->next;
	}
}
