#include<stdio.h>
#include<stdlib.h>



struct Node
{
	int data;
	struct Node* next;

};

struct Node* head;
struct Node* last;



int o=0;

void Insert(int x)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	
	if(temp->next==NULL)
		printf("%d",++o);
	
	
    temp->data=x;	
	

	if(head==NULL)
	{head=temp;last=temp;
	}
	else 
	{
	last->next=temp;
	last=temp;
		if(last->next==NULL)
		    printf("y\n");
	
	}	
}



void Print()
{
	struct Node* temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
	if(temp==NULL)
		printf("WWE");
	
	printf("\nPRINITING DONE\n");
}




	
	
int main()
{
	int i;

    int* a;
    *a=5;

    printf("%d",*a);

	for(i=1;i<=60;i++)
	    Insert(i);

	Print();


}