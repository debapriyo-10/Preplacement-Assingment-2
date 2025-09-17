#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL, size = 0, capacity = 2;
    arr = (int*)malloc(capacity * sizeof(int));
    int choice, val;
    while(1) {
        printf("\n1. Insert  2. Display  3. Exit\n");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter value: ");
            scanf("%d", &val);
            if(size == capacity) {
                capacity *= 2;
                arr = (int*)realloc(arr, capacity * sizeof(int));
            }
            arr[size++] = val;
        } else if(choice == 2) {
            printf("Array: ");
            for(int i=0; i<size; i++) printf("%d ", arr[i]);
        } else break;
    }
    free(arr);
    return 0;
}