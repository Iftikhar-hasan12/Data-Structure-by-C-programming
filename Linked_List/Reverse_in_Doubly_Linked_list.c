
//Reveres Doubly linked list
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

    while(head->next!=NULL)
    {
       head= head->next;
    }
    printf("Reverse : ");


    while(head!=NULL)
    {
        printf("%d ",head->data);
       head= head->prev;
    }

    return 0;

}
