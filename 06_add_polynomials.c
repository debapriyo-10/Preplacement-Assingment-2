#include <stdio.h>

int main() {
    int n;
    printf("Enter degree of polynomial: ");
    scanf("%d", &n);
    int poly1[n+1], poly2[n+1], sum[n+1];
    printf("Enter coefficients of 1st polynomial:\n");
    for(int i=0; i<=n; i++) scanf("%d", &poly1[i]);
    printf("Enter coefficients of 2nd polynomial:\n");
    for(int i=0; i<=n; i++) scanf("%d", &poly2[i]);
    for(int i=0; i<=n; i++) sum[i] = poly1[i] + poly2[i];
    printf("Sum polynomial: ");
    for(int i=n; i>=0; i--) {
        if(sum[i] != 0)
            printf("%d*x^%d ", sum[i], i);
    }
    return 0;
}