//Delete  in Doubly linked list
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


void  dl_end(struct Dnode*top);

void dl_middle(struct Dnode *top);


void  dl_beginning(struct Dnode *top);

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


   printf("\nWhere do you want to Delete  ? \n");
   printf("1.At beginning \n");
   printf("2.In the Middle  \n");
   printf("3.At end \n");
 int c;
  printf("Enter : ");
 scanf("%d",&c);
 if(c==1)
 {
     dl_beginning(head);
 }else if(c==2)
 {
     dl_middle(head);
 }else if(c==3)
 {
     dl_end(head);
 }else
 {
     printf("Invalid input,,,\a");
 }


}

//---------------------------------------------


void  dl_beginning(struct Dnode *top)
{
    struct Dnode *new_node,*ptr,*p;

 //   new_node = create(item);

p=top->next;
p->prev=NULL;
ptr=p;

    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }


}

//===========================================================================
void  dl_end(struct Dnode*top)
{
    struct Dnode *new_node,*ptr,*p,*cat;

//    new_node = create(item);
    p=ptr =top;

    while(ptr->next!=NULL)
    {
         cat=ptr;
        ptr=ptr->next;

    }
cat->next=NULL;


while(p!=NULL){


    printf("%d ",p->data);
    p=p->next;

}

}

//============================================================================

void dl_middle(struct Dnode *top)
{

    int i=1,pos;

    struct Dnode *new_node,*ptr;

 //   new_node = create(item);

    printf("Enter the position : ");
    scanf("%d",&pos);

    while(top!=NULL)
    {

        if(i==pos-1)
        {
          ptr=top->next;
          new_node=ptr->next;
          new_node->prev=top;
          top->next= new_node;
        }
        printf("%d ",top->data);
        top=top->next;
        i++;
    }



}
