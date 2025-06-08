//linked list traversal
#include<stdio.h>
#include<stdlib.h>
struct node
{

    int data;
    struct node*next; // to carrying node address we need node type pointer

};

int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp;
    printf("Enter the size : ");
    scanf("%d",&n);
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
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
        head=head->next;
    }



}
