#include<stdio.h>
int min,max;
void minMax(int *arr,int low, int high)
{
    int max1,min1,mid;
    if(low==high)
        max=min=arr[low];
    else
    {
        if(low==high-1)
        {
            if(arr[low]<arr[high])
            {
                min = arr[low];
                max = arr[high];
            }
            else
            {
                min = arr[high];
                max = arr[low];
            }
        }
        else
        {
            mid=(low+high)/2;
            minMax(arr, low ,mid);
            max1=max;
            min1=min;
            minMax(arr,mid+1,high);
            if(max<max1)
                max=max1;
            if(min1<min)
                min=min1;
        }
    }
}

int main()
{
    int i, n, arr[1000];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n\nThe Array: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
    minMax(arr,0,n-1);
    printf("\n\n\nThe Maximum value: %d and Minimum value: %d",max,min);
    return 0;
}
