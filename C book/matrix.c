#include <stdio.h>
#include<conio.h>
void main() {
    // 2D Matrix Input
    int r2, c2;
    printf("Enter rows and columns for 2D matrix: ");
    scanf("%d %d", &r2, &c2);
    int mat2[10][10];
    printf("Enter %d elements for 2D matrix:\n", r2 * c2);
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Print 2D Matrix
    printf("2D Matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    // 3D Matrix Input
    int d3, r3, c3;
    printf("Enter depth, rows, and columns for 3D matrix: ");
    scanf("%d %d %d", &d3, &r3, &c3);
    int mat3[10][10][10];
    printf("Enter %d elements for 3D matrix:\n", d3 * r3 * c3);
    for (int k = 0; k < d3; k++) {
        for (int i = 0; i < r3; i++) {
            for (int j = 0; j < c3; j++) {
                scanf("%d", &mat3[k][i][j]);
            }
        }
    }

    // Print 3D Matrix side by side
    printf("3D Matrix (side by side):\n");
    for (int i = 0; i < r3; i++) {
        for (int k = 0; k < d3; k++) {
            for (int j = 0; j < c3; j++) {
                printf("%d ", mat3[k][i][j]);
            }
            if (k < d3 - 1) printf("  "); // space between depth matrices
        }
        printf("\n");
    }
    getch()
}