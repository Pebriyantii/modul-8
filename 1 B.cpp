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

    int B[11];
    int b_count = 0;
    for (int i = 0; i < count; i++) {
        if (A[i] > 9) {
            B[b_count] = A[i];
            b_count++;
        }
    }

    printf("b. A (nilai > 9):\n");
    for (int i = 0; i < b_count; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    return 0;
}