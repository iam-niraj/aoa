#include<stdio.h>
void printarray(int *arr,int n){
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}

void insertionSort(int *arr, int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
    int arr[1000],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertionSort(arr,n);
    printarray(arr,n);
    return 0;
}
