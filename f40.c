#include <stdio.h>

void addMatrices(int m1[2][2], int m2[2][2], int res[2][2]);

int main() {
    int m1[2][2] = {{1, 2}, {3, 4}};
    int m2[2][2] = {{5, 6}, {7, 8}};
    int res[2][2];

    addMatrices(m1, m2, res);

    printf("Resultant Matrix after Addition:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void addMatrices(int m1[2][2], int m2[2][2], int res[2][2]) {
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            res[i][j] = m1[i][j] + m2[i][j];
        }
    }
}
