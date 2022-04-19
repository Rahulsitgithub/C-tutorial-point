#include <stdio.h>
#include <malloc.h>
#include<process.h>
#include<conio.h>
#include<string.h>

struct node
{
	struct node *prev;
	char info[20];
	struct node *next;
}*start;
void create_list(char info[]);
void addatbeg(char info[]);
void display();

main()
{
	int choice,n,po,i;
	char info[30];
	start=NULL;

	clrscr();
	while(1)
	{
		printf("\n1.Create List");
		printf("\n2.Add at begining");
		printf("\n3.Display");
		printf("\n4.exit");
		printf("\nEnter your choice :\n ");
		scanf("%d",&choice);
		switch(choice)
		{
		 case 1:
			printf("How many nodes you want : ");
			scanf("%d",&n);
			for(i=0;i<n;i++)
			{
				printf("Enter the element : ");
				scanf("%s",info);
				create_list(info);
			}
			break;
		 case 2:
			printf("Enter the element : ");
			scanf("%s",info);
			addatbeg(info);
			break;

		 case 3:
			display();
			break;

		 case 4:
			exit(1);
		 default:
			printf("Wrong choice\n");
	}/*End of switch*/
   }/*End of while*/
}/*End of main()*/

void create_list(char info[])
{
	struct node *q,*tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	strcpy(tmp->info,info);
	tmp->next=NULL;
	if(start==NULL)
	{
		tmp->prev=NULL;
		start=tmp;
	}
	else
	{
		q=start;
		while(q->next!=NULL)
			q=q->next;
		q->next=tmp;
		tmp->prev=q;
	}
}/*End of create_list()*/

void addatbeg(char info[])
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->prev=NULL;
	strcpy(tmp->info,info);;
	tmp->next=start;
	start->prev=tmp;
	start=tmp;
}/*End of addatbeg()*/

void display()
{
	struct node *q,*t;
	if(start==NULL)
	{
		printf("List is empty\n");
		return;
	}
	q=start;
	printf("List is :\n");
	while(q!=NULL)
	{
		printf("\n%s ", q->info);
		if(q->next==NULL)
		t=q;
		q=q->next;

	}
	printf("\n");
	//q=q->prev;
	while(t!=NULL)
	{
	printf("\n%s",t->info);
	t=t->prev;
	}

}/*End of display() */
