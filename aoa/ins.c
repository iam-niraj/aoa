#include <stdio.h>

void main()
{
    int a[] = {7, 6, 3, 4, 1};

    int i = 1;

    while (i < 5)
    {
        int j = i;
        while (j >= 1)
        {
            if (a[j - 1] > a[j])
            {
                int temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
            j--;
        }
        i++;
    }

    for (int k = 0; k < 5; k++)
    {
        printf("%d", a[k]);
    }
}