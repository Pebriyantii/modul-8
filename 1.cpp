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
    
    printf("d. A (ganjil dengan tata letak):\n");
    for (int i = 0; i < count; i++) {
        if (A[i] % 2 != 0) {
            printf("%d ", A[i]);
        }
    }
    printf("\n");

    return 0;
}