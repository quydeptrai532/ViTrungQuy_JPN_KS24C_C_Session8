#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int n = sizeof(array) / sizeof(array[0]);
    int x,i, found = 0;

    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);

    for ( i = 0; i < n; i++) {
        if (array[i] == x) {
            printf("Vi tri phan tu trong mang la: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu khong ton tai trong mang.\n");
    }

    return 0;
}
