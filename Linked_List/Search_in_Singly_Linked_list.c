//search  in linked list
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

    printf("Enter elements to search : ");
    int item;
    scanf("%d",&item);

    int i=1,flag=0;;
    while(head!=NULL)
    {
        if(head->data == item)
        {
            flag=1;

            printf("%d found at position  %d ",head->data,i);
            break;

        }
        head=head->next;
        i++;
    }
    if(!flag)
    {
        printf("Not found \a");
    }



}
