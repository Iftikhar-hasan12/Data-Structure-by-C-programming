
//Tower of Hanoi
#include<stdio.h>
int main()
{
        int n;
        char a,b,c;
    printf("Enter the number of Disk : ");

    scanf("%d",&n);

 tower(n,'a','b','c');
}
void tower(int n, char beg, char aux, char end)

{
    if(n<=0){
        printf("Empty ...");

    }else if(n==1)
    {
        printf("Disk Move %c to %c\n",beg,end);
    }else{

    tower(n-1,beg,end,aux);
    tower(1,beg,aux,end);
    tower(n-1,aux,beg,end);

    }




}
