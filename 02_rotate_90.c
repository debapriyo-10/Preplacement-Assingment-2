#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);

    printf("Rotated matrix:\n");
    for(int j=0; j<n; j++) {
        for(int i=n-1; i>=0; i--)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}