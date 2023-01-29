//the program of driven manu in single linked list#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct node;
{
	int data;
	struct node* next;
	
};
struct node* start=NULL,*temp,*curr;
//make node
void make_node()
{
	int num;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter An Element in the list");
	scanf("%d",&num);
	temp->data=num;
	start=temp;
	temp->next=start;
}
void insert_firstposition()
{
	int info;
 	temp=(struct node*)malloc(sizeof(struct node*));
	printf("\n Enter the number to inserted:");
	scanf("%d",&info);
	temp->data=info;
	temp->next=start;
	start=temp; 
			
}
void insert_lastposition()
{
	int info;
	printf("\n Enter the number to inserted:");
	scanf("%d",&info);
	temp=(struct node*)malloc(sizeof(struct node*));
	temp->info=info;
	temp->next=NULL;
	curr=start;
	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=temp;
}
void insert_At_A_position()
{
  int data,i,pos;
  printf("Enter the position:");
  scanf("%d",&pos);
  temp=(struct node*)malloc(sizeof(struct node*));
	printf("\n Enter the number to inserted:");
	scanf("%d",&data);
	temp->info=data;
	temp->next=NULL;
	curr=start;
	for(i=1;i<pos-1;i++)
	{
		curr=curr->next;
    }	
	temp->next=curr->next;
	curr->next=temp; 
	 
}
void delete_firstelement()
{
	start=temp;
	start=temp->next;
	temp->next=NULL;
	free(temp);
	
}
void delete_anyposition()
{
	int pos,i;
	printf("\nEnter the position,you want to delete element ");
	scanf("%d",&pos);
	
	curr=start;
	for(i=1;i<pos-1;i++)
	{
		curr=curr->next;
			
	}
 	temp=curr->next;
 	curr->next=temp->next;
 	temp->next=NULL;
 	free(temp);
 }
 void del_last()
 {
 	struct node *pre;
curr=start;
while(curr->next!=NULL)
{
	pre=curr;
 curr=curr->next;
 	
 }
	free(curr);
	pre->next=NULL;
}
void search()
{

    int f;
	printf("Enter the search number,you are looking for in list:");
	scanf("%d",&f);
	curr=start;
	while(curr!=NULL)
	{
	
		if(f==curr->info)
		{
			printf("\t\ndata is avaliable in list\n");
			
	 }
	 	curr=curr->next;
	}
	
}
void travers()
{
	curr=start;
	while(curr!=NULL)
	{
		printf("%d",curr->info);
		curr=curr->next;
	}
	printf("\n");
}
int main()
{
	int ch;
	while(1)
	{
	printf("\t1.make a linked list\n");
	printf("\t1.Insert Element at staring in the list\n");
	printf("\t2.Insert Element at endin the list\n");
	printf("\t3.Insert Element at any position in the list\n");
	printf("\t4.delete Element at starting in the list\n");
	printf("\t5.delete Element at end in the list\n");
	printf("\t6.delete Element at any position in the list\n");
	printf("\t7.Display the list\n");
	printf("\t8.The number you are looking or search for\n");
	printf("\t9.make a linked list\n");
	printf("\t0.out of the program\n");
	printf("\n Enter the choise:");
	scanf("%d",&ch);
	switch(ch)
	{
	
	case 1:
	     make_node();
		 break;
	case 2:
		insert_begin();
		break;
	case 3:
	     insert_end();
		 break;
    case 4:
		insert_Atposition();
		break;	 
	case 5:
	    delete_first();
		break;
	case 6:
	    del_last();
		break;	
	case 7:	
		delete_position();
		break;
	case 8:
	     travers();
		 break;	
    case 9:
	     search();
		 break;		 
	case 10:
	    exit(1);
			 
	default:
	  printf("Incorrect choise");
	  	 	
}
}
return 0;
}
