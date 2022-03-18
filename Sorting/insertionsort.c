#include<stdio.h>
void main()
{
    int arr[30]={5,3,4,1,2};
    int size=5,i,j,temp;
    for(i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);

    }
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;

            }
        }
    }
    printf("\n after sorting\n ");
    for(i=0;i<size;i++)

    {


        printf("\n %d",arr[i]);
    }

}
