
#include<stdio.h>

int  partition(int a[],int low,int high);
void quick(int a[],int low, int high);
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



    quick(a,0,n-1);
    //After  sort
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

}


//===============================================
void  quick(int a[],int low,int high)
{
    if(low<high)
    {
        int pos = partition(a, low,high);
        quick(a,low,pos-1);
        quick(a,pos+1,high);


    }
}




//==================================================
int partition(int a[], int low, int high)
{

    int piv= a[low];
    int start,end;
    start=low;
    end=high;
    while(start<end)
    {
        while(a[start]<=piv)
        {
            start++;
        }
        while(a[end]>piv)
        {
            end--;

        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }

    int temp=a[low];
    a[low]=a[end];
    a[end]=temp;
    return end;
}
