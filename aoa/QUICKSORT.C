#include<stdio.h>

void printarray (int *arr, int n)
{
  for (int i = 0; i < n; i++)
    printf ("%d  ", arr[i]);
}


int partition (int *arr, int low, int high)
{
  int pivot = arr[low];
  int temp, i = low + 1;
  int j = high;
  do
    {
        while (arr[i] <= pivot)
	    {
	        i++;
	    }
        while (arr[j] > pivot)
	    {
	        j--;
	    }
        if (i < j)
	    {
	        temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	    }
    }while (i < j);
    temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	
	return j;
}

void quickSort (int *arr, int low, int high)
{
  if (low < high)
    {
      int partionIndex;
      partionIndex = partition (arr, low, high);
      quickSort (arr, low, partionIndex - 1);
      quickSort (arr, partionIndex + 1, high);
    }
}

int main(){
    int arr[1000],i,n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("\n\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    quickSort(arr,0,n-1);
    printarray(arr,n);
    return 0;
}
