

//Queue Implementation Through Linked list
#include<stdio.h>

struct node{

int data;
struct node*next;

};

struct node*temp,*head=NULL,*current,*fox,*ptr;

void enq();
void dq();
void peak();
void displayqueue();

int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            enq();
            break;
        case 2:
            dq();
            break;
        case 3:
            peak();
            break;
        case 4:

            displayqueue();
            break;
        case 5:
            return;
        default :
            printf("Invalid Entered ...\a");
        }
        getch();
    }
    return 0;

}
//-----------------------------------------


void enq()
{
    temp=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter elements : ");

        int val;
        scanf("%d",&val);
        temp->data=val;
        temp->next=NULL;
        if(head==NULL)
        {
            current =head=temp;
        }else{

        current->next=temp;
        current =temp;


        }
        printf("Success...");

}
//-----------------------------------------
void dq()
{
    if(head==NULL)
    {
        printf("Underflow..\a");
    }else{

    ptr=head->next;
    head=ptr;

     printf("Success...");
    }

}
//--------------------------------------------
void peak()
{
    if(head==NULL)
    {
        printf("Underflow..\a");
    }else{

    printf("%d ",head->data);
    }
}
//----------------------------------------
void displayqueue()
{fox=head;

     if(head==NULL)
    {
        printf("Underflow..\a");
    }else{


    while(fox!=NULL)
    {
        printf("%d ",fox->data);
        fox=fox->next;
    }
    }

}

