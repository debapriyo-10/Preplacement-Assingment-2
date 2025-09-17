#include <stdio.h>

int main() {
    int m, n, count=0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter matrix:\n");
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0) count++;
        }
    printf("Total zeros = %d\n", count);
    return 0;
}