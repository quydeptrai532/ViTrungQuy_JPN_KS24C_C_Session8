#include <stdio.h>

int main() {
    int array[3][3] = {
        {1, 5, 3},
        {9, 2, 8},
        {4, 7, 6}
    };
    int max = array[0][0];
    int i,j;

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            if (array[i][j] > max) {
                max = array[i][j];
            }
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);

    return 0;
}
