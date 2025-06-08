//Doubly linked list
#include<stdio.h>
#include<stdlib.h>



struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer
  struct node*prev;
};






struct node * create(int val)
{
    struct node*root;
    root=(struct node*)malloc(sizeof(struct node));
    root->data=val;
    root->next=NULL;
    root->prev=NULL;

    return root;
}





int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*last=NULL;
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




    while(head!=NULL)
    {
        printf("%d ",head->data);
       head= head->next;
    }


}
