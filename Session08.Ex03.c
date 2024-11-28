#include <stdio.h>

int main() {
    int n,i,j;

    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    int array[n][n];

    printf("Nhap cac phan tu cua mang:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("Phan tu [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nMa tran vuong vua nhap la:\n");
    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
