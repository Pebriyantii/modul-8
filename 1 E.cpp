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

    printf("e. A (ganjil dengan tata letak):\n");
    for (int i = 0; i < count; i++) {
        if (A[i] % 2 != 0) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}