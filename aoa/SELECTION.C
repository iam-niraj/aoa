#include<stdio.h>
void printarray(int *arr,int n){
    for(int i=0;i<n;i++)
        printf("%d  ",arr[i]);
}

void selectionSort(int *arr,int n)
{
    int key,j;
    for(int i=0;i<n;i++)
    {
        key=arr[i];
        for(j=i+1;j<n;j++)
        {
            if(key>arr[j] && j<=n)
            {
                key=arr[j];
                arr[j]=arr[i];
            }
        }
        
    }
}

int main(){
    int arr[1000],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    selectionSort(arr,n);
    printarray(arr,n);
    return 0;
}
