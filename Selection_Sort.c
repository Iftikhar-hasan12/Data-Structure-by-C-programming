//Selection sort
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

    for(int i=0; i<n-1; i++)
    {
        int min =i;
        for( int j=i+1; j<n; j++)
        {
            if(a[min]>a[j])
            {
                min=j ;
            }
        }
        if(min!=i)
        {
            int temp = a[i];
            a[i]=a[min];
            a[min]=temp;
        }

    }


    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
