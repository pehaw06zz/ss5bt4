#include <stdio.h>

int main() {
    int n;
    do {
        printf("nhap 1 so nguyen duong tu 1 - 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("pha nhap so tu 1 - 10.\n");
        }
    } while (n < 1 || n > 10);
    printf("bang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
