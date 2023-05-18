#include <stdio.h>

void main() {
    int a[] = {10, 20, 30, 40, 50};

    int lr = 0;
    int hr = 4;
    int f = 0;
    int item = 40;
    int mid = 0;

    while(lr <= 4) {
         mid = (lr+ hr) / 2;

        if(a[mid] == item) {
            f = 1;
            break;
        } else if (a[mid] < item) {
            lr = mid + 1;
        } else
        {
            hr = mid-1;
        }
    }

    if(f == 1) {
        printf("Element found at %d", mid);
    }
}