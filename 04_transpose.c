#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter matrix:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);

    printf("Transpose:\n");
    for(int j=0; j<n; j++) {
        for(int i=0; i<m; i++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}