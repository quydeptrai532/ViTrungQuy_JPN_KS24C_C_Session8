#include <stdio.h>

int main() {
    int n = 10,i,j;
    int array[10] = {1, 3, 2, 1, 4, 1, 2, 3, 3, 3};
    int maxCount = 0, mostfrequent = array[0];

    for ( i = 0; i < n; i++) {
        int count = 0;
        for ( j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostfrequent = array[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d\n", mostfrequent);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}






