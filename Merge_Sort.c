#include<stdio.h>

int  merge(int a[],int low,int high);
void mergeSort(int a[],int low, int mid, int high);
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

   //mergeSort Function

   merge(a,0,n-1);
   //After merge sort
   for(int i=0; i<n; i++)
   {
       printf("%d ",a[i]);
   }

}
int  merge(int a[],int low,int high)
{
    if(low<high)
    {
        int mid =(low+high)/2;
        merge(a,low,mid);
        merge(a,mid+1,high);
        mergeSort(a,low,mid,high);

    }
}

void mergeSort(int a[],int low, int mid, int high)
{

    int i,j,k,n;
    n=high-low+1;
    int temp[n];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&& j<=high)
    {
        if(a[i]<a[j])
        {
            temp[k]=a[i];
            k++,i++;
        }else
        {
           temp[k]=a[j];
            k++,j++;
        }
    }



    while(i<=mid)
    {
        temp[k]=a[i];
            k++,i++;
    }
    while(j<=high)
    {
         temp[k]=a[j];
            k++,j++;
    }

    for(int i=low; i<=high; i++)
    {
        a[i]=temp[i];
    }

}
