#include<stdio.h>
#include<stdlib.h>
struct bus
{
	int seats;
	struct bus *left,*right;
};
struct bus *root=NULL;
void add(int cap)
{
	struct bus *opt,*curr,*par;
	opt=(struct bus*)malloc(sizeof(struct bus));
	opt->seats=cap;
	opt->left=NULL;opt->right=NULL;
	if(root==NULL){root=opt;}
	else
	{
		curr=root;
		par=NULL;
		while(1)
		{
			par=curr;
			if(par->seats<cap)
			{
				curr=curr->right;
				if(curr==NULL)
				{
					par->right=opt;
					return;
				}
			}
			else
			{
				curr=curr->left;
				if(curr==NULL)
				{
					par->left=opt;
					return;
				}
			}
		}
	}
}
void pre(struct bus *current)
{
	if(current!=NULL)
	{
		printf("%d ",current->seats);
		pre(current->left);
		pre(current->right);
	}
}
void post(struct bus *current)
{
	if(current!=NULL)
	{
		post(current->left);
		post(current->right);
		printf("%d ",current->seats);
	}
}
void in(struct bus *current)
{
	if(current!=NULL)
	{
		in(current->left);
		printf("%d ",current->seats);
		in(current->right);
	}
}
struct bus* search(int data)
{
	struct bus *temp;
	temp=root;
	while(temp->seats!=data)
	{
		if(temp!=NULL)
		{printf("%d ",temp->seats);}
		if(temp->seats<data)
		{temp=temp->right;}
		else{temp=temp->left;}
		if(temp==NULL){return NULL;}
	}
	return temp;
}
int findHeight(struct bus *head)
{
	if(head!=NULL)
	{
		int htLeft=findHeight(head->left);
		int htRight=findHeight(head->right);
		if(htLeft>htRight)
		{return htLeft+1;}
		else{return htRight+1;}
	}
}
void main()
{
	int source[7]={12,45,92,11,82,64,4};
	int index=0;//struct bus *one;
	while(index<7)
	{
		add(source[index]);index++;
	}
	//one=search(82);
	printf("\nSearched: %d",search(82)->seats);
	printf("\nPreOrder: ");pre(root);
	printf("\nPostOrder: ");post(root);
	printf("\nInOrder: ");in(root);
	printf("\nHeight is:%d",findHeight(root));
}
