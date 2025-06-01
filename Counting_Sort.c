
// Modified Counting sort
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
        if(max<a[i])
        {
            max=a[i];
        }
    }
    int temp[max+1];
    //fill the temporary Array with zero up to Max number
for(int i=0; i<max+1; i++)
{
            k=0;
    for(int j=0; j<n; j++)
    {
        if(a[j]==i)
        {  k++;


        }
         temp[i]=k;

    }
}

int p=0;
for(int i=0; i<max+1; i++)
{
   for(int j=0; j<temp[i]; j++)
   {
       a[p]=i;
       p++;
   }
}



for(int i=0; i<n; i++)
{
    printf("%d ",a[i]);
}




}

/*Original Counting Sort



#include<stdio.h>
int main()
{

    printf("Enter Size : ");
    int n,max=0;
    scanf("%d",&n);
    int a[n];
    printf("Enter Elements :  ");
    for(int i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
        if(max<a[i])
        {
            max = a[i];
        }
    }

    int temp[max+1];
    for(int i =0; i<=max; i++ )
    {
        temp[i]=0;
    }




    for(int i =0; i<n; i++ )
    {

        temp[a[i]]+=1;

    }


    for(int i =1; i<=max; i++ )
    {

        temp[i]= temp[i]+temp[i-1];

    }


    int arry[n];


    for(int i=n-1; i>=0; i-- )
    {

        arry[temp[a[i]]-1]=a[i];
        temp[a[i]]--;


    }


    for(int i =0; i<n; i++ )
    {

        printf("%d ",arry[i]);

    }






}



 */
