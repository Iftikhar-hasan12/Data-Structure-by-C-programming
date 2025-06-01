
//Stack implementation through Linked list
#include<stdio.h>


struct node
{
    int data;
    struct node*prev;

};

struct node*top=NULL,*p,*previous,*temp;


void push();
void pop();
void peak();
void display();

int n=5;//size is fixed but you can set it through the user
int main()
{
    while(1)
    {
        system("cls");
        int ch;
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peak\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        printf("Enter choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peak();
            break;
        case 4:

            display();
            break;
        case 5:
            return;
        default :
            printf("Invalid Entered ...\a");
        }
        getch();
    }


}
//--------------------------------------
void push()
{
    printf("Enter elements : ");
    int val;
    scanf("%d",&val);
    p=(struct node*)malloc(sizeof(struct node)); // Here I am building a linked list
    // by tracking  previous  address\n


    p->data=val;
    p->prev=top;
    top=p;



    printf("Push function success..\n");


}
//-------------------------------------
void pop()
{
    if(top==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {

        previous =top->prev;
        top=previous;

        printf("POP function success..\n");
    }

}

//-------------------------------------
void peak()
{
    if(top==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {
        printf("PEAK is %d",top->data);
    }
}
//-------------------------------------
void display()
{
    temp=top;

    if(temp==NULL)
    {
        printf("Underflow...\a ");
    }
    else
    {

        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->prev;
        }

    }
}
