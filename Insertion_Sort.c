//Insertion sort
#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter size : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements : ");
    int max=0;
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);

    }

    //Insertion sort
    for(int i=1; i<n; i++)
    {
        int j=i-1;
        int temp=a[i];
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=temp;
    }


    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}
