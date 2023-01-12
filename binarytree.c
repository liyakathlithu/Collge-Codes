#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *right;
	struct node *left;
};
struct node *root=NULL;
struct node *ptr=NULL;
struct node *ptr1=NULL;
struct node *new=NULL;
int x;
void insert(struct node *ptr);
void inorder(struct node *ptr);
void postorder(struct node *ptr);
void preorder(struct node *ptr);
void main()
{
int opt;
while (opt!=5)
{
printf("\nEntert your option :\n1.INSERT\n2.INORDER\n3.PREORDER\n4.POSTORDER\n5.EXIT ");
scanf("%d",&opt);
switch(opt)
{
	case 1:insert();
		break;
	case 2:inorder();
		break;
	case 3:preorder();
		break;
	case 4:postorder();
		break;
	case 5:exit;
		break;
	default: printf("INVALID CHOICE");
	}
}
}

void insert()
{
	int x;
	struct node *new;
	new=struct node malloc(sizeof(struct node));
	if(new==NULL)
		printf("\nINSUFFICIENT MEMORY");
	else
	{	
		printf("Enter the item :");
		scanf("%d",&x);
		new->right=new->left=NULL;
		new->data=x;
	}
	if(root=NULL)
	{
		root=new;
	}
	ptr=root;
	while(ptr!=NULL)
	{
		if(x==ptr->data)
		{
			ptr1=ptr;
			ptr=ptr->right;
		}
		else
		{
			ptr1=ptr;
			ptr=ptr->left;
		}
	}
}






















