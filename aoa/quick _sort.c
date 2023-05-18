#include <stdio.h>

int partition(int a[], int start, int end)
{
    int pivot = end, i = start, j = start;
    while (i < end)
    {
        if (a[i] < a[pivot])
        {
            int temp = a[j];  
            a[j] = a[i]; 
            a[i] = temp; 
            j++;
        }
        i++;
    }
    int temp = a[j];
    a[j] = a[pivot];
    a[pivot] = temp;
    return j;
}

void quickSort(int a[], int start, int end)
{
    if (start < end)
    {
        int p = partition(a, start, end);
        quickSort(a, start, p - 1);
        quickSort(a, p + 1, end);
    }
}

int main()
{
    int size, a[20];
    printf("Shruti Suresh Sahu. \n");
    printf("60019220100 \n");
    printf("\nEnter the size of an array : ");
    scanf("%d", &size);
    printf("Enter %d values of an array : \n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    quickSort(a, 0, size - 1);
    printf("\nAfter sorting the array is : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}