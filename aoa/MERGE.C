#include<stdio.h>
void merge(int *arr,int low ,int mid, int high)
{
    int i, j, k, barr[low+1];
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            barr[k]=arr[i];
            i++;
            k++;
        }    
        else
        {
            barr[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid)
        {
            barr[k]=arr[i];
            i++;
            k++;
        }
    while(j<=high)
        {
            barr[k]=arr[j];
            j++;
            k++;
        }
    for(i=low;i<=high;i++)
    {
        arr[i]=barr[i];
    }
}

void mergesort(int *arr, int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main()
{
    int i, n, arr[1000];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    mergesort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0; 
}
