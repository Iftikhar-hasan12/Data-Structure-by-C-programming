//Queue Implementation Through Array
#include<stdio.h>
int Q[5];

void enq();
void dq();
void peak();
void displayqueue();
int front=-1,end=-1;
int n=5;//size is fixed but you can set it through the user
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
//------------------------------------------------------------------------------
void enq()
{

    if(end==n-1)
    {
        printf("Overflow....\n\a");
    }
    else if(front ==-1 && end==-1)
    {
        end=front=0;
        printf("\nEnter elements : ");

        int val;
        scanf("%d",&val);
        Q[end]=val;

        printf("Enqueue function success..\n");


    }




    else
    {
        end++;

        printf("\nEnter elements : ");
        int val;
        scanf("%d",&val);
        Q[end]=val;

        printf("Enqueue function success..\n");

    }
}
//-------------------------------------
void dq()
{
    if(front==-1 && end==-1)

    {
        printf("Underflow...\a ");
    }

    else if(front==end)
    {
        front=end=-1;

         printf("Dequeue function success..\n");
    }


    else
    {

        front ++;
        printf("Dequeue function success..\n");

    }
}
//-------------------------------------
void peak()
{
    if(front==-1 && end==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {
        printf("PEAK is %d",Q[front]);
    }
}
//-------------------------------------
void displayqueue()
{

    if(front ==-1&& end==-1)
    {
        printf("Underflow...\a ");
    }
    else
    {

       for(int i=front; i<=end; i++)
       {
           printf("%d ",Q[i]);
       }
    }
}
