#include <stdio.h>

int main() {
    int n, m;
    printf("Enter degree of 1st polynomial: ");
    scanf("%d", &n);
    int poly1[n+1];
    printf("Enter coefficients:\n");
    for(int i=0; i<=n; i++) scanf("%d", &poly1[i]);

    printf("Enter degree of 2nd polynomial: ");
    scanf("%d", &m);
    int poly2[m+1];
    printf("Enter coefficients:\n");
    for(int i=0; i<=m; i++) scanf("%d", &poly2[i]);

    int prod[n+m+1];
    for(int i=0; i<=n+m; i++) prod[i] = 0;

    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
            prod[i+j] += poly1[i] * poly2[j];

    printf("Product polynomial: ");
    for(int i=n+m; i>=0; i--) {
        if(prod[i] != 0)
            printf("%d*x^%d ", prod[i], i);
    }
    return 0;
}