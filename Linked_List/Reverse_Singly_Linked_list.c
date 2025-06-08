
//reverse  in linked list
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
int main()
{
    int val,n;
    struct node*head=NULL,*current,*temp,*tail=NULL,*ptr,*fogg;
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



fogg=head;
int backup;

while(fogg!=NULL)
{ backup=fogg->next;
    fogg->next=tail;
    tail=fogg;
    fogg=backup;
}
printf("After Reverse : ");


while(tail!=NULL)
{
    printf("%d ",tail->data);
    tail=tail->next;
}
}
