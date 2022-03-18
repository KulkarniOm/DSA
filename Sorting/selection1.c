#include<stdio.h>
void main()
{
    int arr[30] = {-5,4,-3,2,-1};
    int size = 5;

    for(int i=0;i<size;i++){
        int small = i;
        for(int j=i;j<size;j++){
            if(arr[small] < arr[j]){
                small = j;
                printf("gdjhsg");
            }
        }
        int temp = arr[i];
                arr[i] = arr[small];
                arr[small] = temp;
    }

    print(arr,size);

}
void print(int arr[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("\n %d",arr[i]);
    }
}
