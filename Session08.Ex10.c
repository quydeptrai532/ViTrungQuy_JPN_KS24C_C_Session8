#include <stdio.h>

int main() {
    int n = 10;
    int i,j,k;
    int array[10] = {1, 3, 2, 1, 4, 1, 2, 3, 3, 3};
    int maxCount = 0;
    int count;

    for ( i = 0; i < n; i++) {
        count = 0;
        for ( j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    printf("Cac phan tu xuat hien nhieu nhat: ");
    for ( i = 0; i < n; i++) {
        count = 0;
        for ( j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count == maxCount) {
            printf("%d ", array[i]);
            for ( k = 0; k < i; k++) {
                if (array[k] == array[i]) {
                    break;
                }
                if (k == i - 1) {
                    printf("%d ", array[i]);
                }
            }
        }
    }
    printf("\n");

    return 0;
}
