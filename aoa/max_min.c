#include<stdio.h>
#include<stdio.h>

int a[100];
int min;
int max;

void minmax(int i, int j) {
    int max1;
    int min1;
    if(i == j) {
        min = max = a[i];
    } else {
        if(i == j-1) {
            if( a[i] < a[j]) {
                max = a[j];
                min = a[i];
            } else {
                max = a[i];
                min = a[j];
            }
        } else {
            int mid = (i + j) / 2;
            minmax(i, mid);
            max1 = max; min1 = min;
            minmax(mid + 1, j);
            if(max < max1) {
                max = max1;
            }
            if(min > min1) {
                min = min1;
            }
        }
    }
}

int main() {
    int num;
    printf("Enter how many nums:");
    scanf("%d", &num);
    printf("Enter nums:");
    for( int i =1; i <= num; i++) {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];

    minmax(1, num);
    printf("%d", min);
    printf("%d", max);


    return 0;
}


