#include <stdio.h>

int main() {
    int n = 3;
    int array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    int i;

    printf("Cac phan tu tren duong cheo chinh la:\n");
    for ( i = 0; i < n; i++) {
        printf("%d ", array[i][i]);
        sum += array[i][i];
    }

    printf("\nTong cac phan tu tren duong cheo chinh la: %d\n", sum);

    return 0;
}
