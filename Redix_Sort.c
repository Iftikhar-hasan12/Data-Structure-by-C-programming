
 #include<stdio.h>



int arry[10];

int main()
{
int n,max=0;
    printf("Enter Size : ");

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

redix(a,n,max);


 for(int i= 0; i<n; i++ )
    {

        printf("%d ",a[i]);

    }


}




void redix(int a[],int n,int max)
{


    for(int pos = 1; (max/pos)>0; pos=pos*10)
    {

        count(a,n,pos) ;

    }


}




void count(int a[], int n, int pos)
{




    int temp[10];
    for(int i =0; i<=9; i++ )
    {
        temp[i]=0;
    }




    for(int i =0; i<n; i++ )
    {

        temp[(a[i]/pos)%10]+=1;

    }


    for(int i =1; i<=9; i++ )
    {
        temp[i]= temp[i]+temp[i-1];
    }
    //int arry[n];
    for(int i=n-1; i>=0; i-- )
    {
        arry[temp[(a[i]/pos)%10]-1]=a[i];



        temp[(a[i]/pos)%10]--;

    }



     for(int i =0; i<n; i++ )
    {

      a[i]=arry[i];

    }




}
