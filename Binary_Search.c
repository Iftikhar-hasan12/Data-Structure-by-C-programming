#include<stdio.h>

void binary(int a[], int low, int high,int val);
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


    binary(a,0,n-1,val);


}
void binary(int a[], int low, int high,int val)
{
    int flag=0;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(a[mid]==val)
        {flag=1;
            printf("Found at position %d",mid+1);
            break;
        }else if( a[mid]>val)
        {
            high = mid-1;
        }else{

        low=mid+1;
        }

    }

    if(!flag)
    {
        printf("Elements not found ..!\a");
    }
}
