#include <stdio.h>

int b_search(int num[], int Left, int Right, int key) {
    int Middle = 0;
    while (Left <= Right) {
        Middle = Left + (Right - Left) / 2;

        
        if (num[Middle] == key){
            return Middle;
        }

        
        if (num[Middle] > key){
            return b_search(num, Left, Middle-1, key);
        }

        
        else{
            return b_search(num, Middle+1, Right, key);
        }
    }

    
    return -1;
}

int main() {
    int size = 0, key = 0, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", & size);
    int num[size];
    printf("Enter the elements of the array in ascending order: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", & num[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", & key);
    found = b_search(num, 0, size - 1, key);
    if (found == -1) {
        printf("Element is not present in the array");
    } 
    else {
        printf("Element found at index %d", found);
    }
    return 0;
}
