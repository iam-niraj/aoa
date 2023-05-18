#include <stdio.h>

void main()
{
    int a[] = {7, 6, 3, 4, 1};
    int i = 0;

    while (i < 4)
    {
        int loc = 0;
        int min = 999;
        int j = i + 1;
        while (j < 5)
        {
            if (min > a[j])
            {
                min = a[j];
                loc = j;
            }
            j++;
        }
        if (a[loc] < a[i])
        {
            int temp = a[i];
            a[i] = a[loc];
            a[loc] = temp;
        }
        i++;
    }
    for (int k = 0; k < 5; k++)
    {
        printf("%d", a[k]);
    }
}