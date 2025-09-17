#include <stdio.h>

int main() {
    int n, identity=1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];
    printf("Enter matrix:\n");
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
            if((i==j && arr[i][j]!=1) || (i!=j && arr[i][j]!=0)) {
                identity=0;
            }
        }
    if(identity) printf("Matrix is identity\n");
    else printf("Matrix is not identity\n");
    return 0;
}