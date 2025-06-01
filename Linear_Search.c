
#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0; i<n; i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter Search Elements : ");
    int val;
    scanf("%d",&val);

    for(int i=0; i<n; i++)
    {
       if(val==a[i])
       {      flag=1;
           printf("Found at position : %d",i+1);
           break;
       }
    }


    if(!flag)
    {
        printf("Elements not found\n");
    }
    return 0;

}
