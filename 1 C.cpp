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

    int C[11];
    int c_count = 0;
    for (int i = 0; i < count; i++) {
        if (A[i] % 2 != 0) {
            C[c_count] = A[i];
            c_count++;
        }
    }

    printf("c. A (nilai ganjil):\n");
    for (int i = 0; i < c_count; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}