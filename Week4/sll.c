//Program for creation of single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node*head = NULL,*tail=NULL,*cur,*next,*prev;
void create()
{
	int n,i;
	printf("Enter how many no of nodes to be created:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cur=(struct node*)malloc(sizeof(struct node));
		printf("Enter cur node data:\n");
		scanf("%d",&(cur->data));
		cur->link=NULL;
		if(head==NULL)
			head=tail=cur;
		else
		{
			tail->link=cur;
			tail=cur;
		}
        }
}
void traversal()
{
    if (head == NULL)
      printf("list is empty\n");
    else
     {
         next = head;
           while(next != NULL)
           {
              printf("%d->",next->data);
              next = next->link;
           }
      }
}
void insert_at_begin()
{
	struct node *head,*tail,*cur;
	head = 0,tail=0;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&(cur->data));
	cur->link=g=head;
	head=cur;
}
void insert_at_position()
{
	int pos,c=1;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter dat:\n");
	scanf("%d",&pos);
	next=head;
	while(c<pos)
	{
		prev=next;
		next=next->link;
		c++;
	}
	prev->link=cur;
	cur->link=next;
}
void insert_at_end()
{
	struct node *tail,*cur;
	tail=0
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	cur->link=NULL;
	tail->link=cur;
	tail=cur;
}
void insert_before_node()
{
	struct node *prev,*next,*cur;
	int value;
	cur=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&(cur->data));
	next=head;
	while(next->data!=value && next!=NULL)
	{
		prev=next;
		next=next->link;
	}
	prev->link=cur;
	cur->link=next;
}
void insert_after_node()
{
	struct *head,*next,*cur;
	int value;
	cur=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&(cur->data));
	printf("Enter after which node we need to perform insertion:\n");
	scanf("%d",&value);
	next=head;
	while(next->data!=value && next!=NULL)
		nextt=next->link;
	cur->link=next->link;
	next->link=cur;
}
int main()
{
        int ch;
        while(1)
        {
          printf("program for sll\n");
          printf("1-create\n 2-insert at begin\n 3-insert atpos\n 4-insert end\n 5-insert before");
          printf("\n6-ins after\n7-del at begin\n8-del at pos\n9 del before\n");
          printf("11-del after\n12-traversal\n13-display in reversa\n14-search\n15-sort"); 
          printf("entwer ur choice\n");
          scanf("%d",&ch);
          switch(ch)
          {
               case 1 : create();
                         break;
               case 2 : insert_at_begin();
                        break;
               case 3 : insert_at_position();
                        break;
               case 4 : insert_at_end();
                        break;
               case 5 : insert_at_before();
                        break;
               case 
               case 12: traversal(); 
                         break;
               case 16: exit(0);
          }
         }
}

