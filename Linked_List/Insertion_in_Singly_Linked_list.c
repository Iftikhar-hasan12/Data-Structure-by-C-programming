
//insertion in linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};


struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;

    return root;
}


void  insert_end(struct node*top,int item);

void insert_middle(struct node *top,int item);


void  insert_beginning(struct node *top, int item);

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&val);
        temp=create(val);
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


   printf("\nWhere are you want to insert ? \n");
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


void  insert_beginning(struct node *top, int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);


    new_node->next =top;
    top =new_node;
    ptr =top;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  insert_end(struct node*top,int item)
{
    struct node *new_node,*ptr;

    new_node = create(item);
    ptr =top;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }

    ptr->next=new_node;

    while(top!=NULL)
    {
        printf("%d ",top->data);
        top=top->next;


    }


}


//============================================================================

void insert_middle(struct node *top,int item)
{

    int i=1,pos;

    struct node *new_node,*ptr;

    new_node = create(item);



    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {


        if(i==pos-1)
        {
            new_node->next=top->next;
            top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }
}

