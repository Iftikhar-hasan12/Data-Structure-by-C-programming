
//insertion in Doubly linked list
#include<stdio.h>
#include<stdlib.h>

struct Dnode
{

    int data;
    struct Dnode*next; // to carrying node address we need node type pointer
struct Dnode*prev;
};


struct Dnode * create(int val)
{
    struct Dnode*root;
    root=(struct Dnode*)malloc(sizeof(struct Dnode));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}


void  insert_end(struct Dnode*top,int item);

void insert_middle(struct Dnode *top,int item);


void  insert_beginning(struct Dnode *top, int item);

int main()
{
    int val,n;
    struct Dnode*head=NULL,*current,*temp,*last=NULL;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
        temp->prev=last;
        last=temp;
        if(head==NULL)
        {
            head=current=temp;;
        }
        else
        {
            current->next=temp;
            current=temp;

        }
    }

    printf("Enter elements to insert  : ");
    int item;
    scanf("%d",&item);


   printf("\nWhere do you want to insert ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     insert_beginning(head,item);
 }else if(c==2)
 {
     insert_middle(head,item);
 }else if(c==3)
 {
     insert_end(head,item);
 }else
 {
     printf("Invalid input,,,\a");
 }


}

//---------------------------------------------


void  insert_beginning(struct Dnode *top, int item)
{
    struct Dnode *new_node,*ptr;

    new_node = create(item);


     new_node->next =top;
    top->prev=new_node;
    top =new_node;
    ptr =top;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  insert_end(struct Dnode*top,int item)
{
    struct Dnode *new_node,*ptr,*p;

    new_node = create(item);
    p=ptr =top;

    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=new_node;
    new_node->prev=ptr;

while(p!=NULL){


    printf("%d ",p->data);
    p=p->next;

}

}

//============================================================================

void insert_middle(struct Dnode *top,int item)
{

    int i=1,pos;

    struct Dnode *new_node,*ptr;

    new_node = create(item);

    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {

        if(i==pos-1)
        {
            new_node->prev=top;
            new_node->next=top->next;
            top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

}
