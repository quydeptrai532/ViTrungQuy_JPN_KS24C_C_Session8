#include <stdio.h>

int main() {
    int rows = 3, cols = 4;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int sum = 0;
    int i,j;

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += array[i][j];
            }
        }
    }

    printf("Tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);

    return 0;
}
