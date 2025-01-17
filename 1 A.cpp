#include <stdio.h>

int main() {
    int A[11];
    int input;
    int count = 0;

    printf("Masukkan data (akhiri dengan 999):\n");
    while (count < 11) {
        scanf("%d", &input);
        if (input == 999) {
            break;
        }
        A[count] = input;
        count++;
    }

    printf("a. A:\n");
    for (int i = 0; i < count; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}