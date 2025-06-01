//Stack implementation through Array
#include<stdio.h>
int stack[5];

void push();
void pop();
void peak();
void display();
int top=-1;
int n=5;//size is fixed but you can set it through the user
int main()
{
    while(1){
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
//------------------------------------------------------------------------------
void push()
{

    if(top==n-1)
    {
        printf("Overflow....\n\a");
    }else{
    top++;
    printf("\nEnter elements : ");
    int val;
    scanf("%d",&val);
    stack[top]=val;

    printf("Push function success..\n");

    }
}
//-------------------------------------
void pop()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    top--;


     printf("POP function success..\n");

    }
}
//-------------------------------------
void peak()
{
    if(top==-1)
    {
        printf("Underflow...\a ");
    }else{
        printf("PEAK is %d",stack[top]);
    }
}
//-------------------------------------
void display()
{
    int i=top;
     if(top==-1)
    {
        printf("Underflow...\a ");
    }else{

    while(i>=0)
    {
        printf("%d \n",stack[i]);
        i--;
    }

    }
}
