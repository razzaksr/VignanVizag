#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct mobile
{
	char model[30], feature[30]; int price;
	struct mobile *link;
};

struct mobile *index;

void startIn()
{
	struct mobile *fresh;
	fresh=(struct mobile*)malloc(sizeof(struct mobile));
	char tempModel[30], tempFeat[30];
	int tempPrice;
	scanf("%s%s%d",tempModel,tempFeat,&tempPrice);
	strcpy(fresh->model,tempModel);
	strcpy(fresh->feature,tempFeat);
	fresh->price=tempPrice;
	if(index==NULL)
	{fresh->link=NULL;}
	else{fresh->link=index;}
	index=fresh;
	printf("\nMobile added to stock at beginning");
}
void display()
{
	struct mobile *point;
	point=index;
	while(point!=NULL)
	{
		printf("\nMobile info: %s\n%s\n%d",
		point->model,point->feature,point->price);
		point=point->link;
	}
}
void lastIn()
{
	struct mobile *fresh, *point;
	fresh=(struct mobile*)malloc(sizeof(struct mobile));
	char tempModel[30], tempFeat[30];
	int tempPrice;
	scanf("%s%s%d",tempModel,tempFeat,&tempPrice);
	strcpy(fresh->model,tempModel);
	strcpy(fresh->feature,tempFeat);
	fresh->price=tempPrice;
	point=index;
	if(index==NULL)
	{
		fresh->link=NULL;
		index=fresh;
	}
	else
	{
		while(point->link!=NULL)
		{
			point=point->link;
		}
		fresh->link=NULL;
		point->link=fresh;
		printf("\nMobile added at last");
	}
}
void midIn()
{
	struct mobile *fresh, *point;
	int i=0,mid;
	fresh=(struct mobile*)malloc(sizeof(struct mobile));
	char tempModel[30], tempFeat[30];
	int tempPrice;
	scanf("%s%s%d",tempModel,tempFeat,&tempPrice);
	strcpy(fresh->model,tempModel);
	strcpy(fresh->feature,tempFeat);
	fresh->price=tempPrice;
	point=index;
	printf("\nEnter the position");
	scanf("%d",&mid);
	while(i<mid)
	{
		point=point->link;i++;
	}
	fresh->link=point->link;
	point->link=fresh;
	printf("\nMobile added at middle");
}
void startOut()
{
	struct mobile *point;
	if(index==NULL){printf("\nList is empty");}
	else
	{
		point=index;
		index=index->link;
		free(point);
		printf("\nDEletion happed at start");
	}
}
void lastOut()
{
	struct mobile *outOne,*outTwo;
	if(index==NULL){printf("\nList is empty");}
	else
	{
		outOne=index;outTwo=index;
		while(outOne->link!=NULL)
		{
			outTwo=outOne;
			outOne=outOne->link;
		}
		outTwo->link=NULL;free(outOne);
		printf("\nDEletetion happed at last");
	}
}
void midOut()
{
	int i=0, desire;struct mobile *p,*q;
	printf("\nEnter the position to delete: ");
	scanf("%d",&desire);
	p=index;q=index;
	while(i<desire)
	{
		q=p;
		p=p->link;i++;
	}
	q->link=p->link;
	free(p);
	printf("\nDEletion Happend at mid");
}
void main()
{
	startIn();startIn();startIn();display();
	midOut();display();
}
