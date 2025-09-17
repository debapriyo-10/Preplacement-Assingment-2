#include <stdio.h>

int main() {
    int n, sum1=0, sum2=0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);

    for(int i=0; i<n; i++) {
        sum1 += arr[i][i];
        sum2 += arr[i][n-i-1];
    }
    printf("Sum of main diagonal = %d\n", sum1);
    printf("Sum of secondary diagonal = %d\n", sum2);
    return 0;
}