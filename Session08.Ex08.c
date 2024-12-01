#include <stdio.h>

int main() {
    int n = 4,i; 
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;

    printf("Cac phan tu tren duong cheo phu cua ma tran:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", matrix[i][n - 1 - i]);
        sum += matrix[i][n - 1 - i];
    }

    printf("\nTong cac phan tu tren duong cheo phu: %d\n", sum);

    return 0;
}
