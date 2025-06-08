//Deletion in linked list
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

void  delete_end(struct node*top);

void delete_middle(struct node *top,int n);

void  delete_beginning(struct node *top);

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
   printf("\nWhere do you want to delete ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
 printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     delete_beginning(head);
 }else if(c==2)
 {
     delete_middle(head,n);
 }else if(c==3)
 {
     delete_end(head);
 }else
 {
     printf("Invalid input,,,\a");
 }

}
//---------------------------------------------


void  delete_beginning(struct node *top)
{
    struct node *new_node,*ptr;

    ptr = top->next;
    free(top); //deallocate memory
    top=ptr;



    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  delete_end(struct node*top)
{
    struct node *new_node,*ptr;


    ptr=top;
    while(ptr->next!=NULL)
    {
         printf("%d ",ptr->data);
        ptr=ptr->next;
    }


   printf("\n\n Deleted element %d",ptr->data);

free(ptr);


}

//============================================================================

void delete_middle(struct node *top,int n)
{

    int i=1,pos;

    struct node *new_node,*ptr;
    printf("Enter the position : ");
    scanf("%d",&pos);
    if(pos==1 || pos ==n)
    {
        printf("You can't Delete the first and last Element \a ");
    }else {

    while(top!=NULL)
    {


        if(i==pos-1)
        {
           ptr=top->next;
           new_node=ptr->next;
           free(ptr);
           top->next=new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }

    }

}
