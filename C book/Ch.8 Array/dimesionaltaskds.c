#include <stdio.h>

int main() {
    int mainChoice, dimChoice, orderChoice, typeChoice;
    int i, j, k, temp;
    int rows, cols, n;

    printf("Sorting\n");
    printf("1. Single Dimension\n");
    printf("2. Two Dimension\n");
    printf("Enter choice: ");
    scanf("%d", &dimChoice);

    if (dimChoice == 1) { // Single Dimension
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf("Enter choice: ");
        scanf("%d", &orderChoice);

        printf("1. Integer\n");
        printf("2. Character\n");
        printf("Enter choice: ");
        scanf("%d", &typeChoice);

        printf("Enter size of array: ");
        scanf("%d", &n);

        if (typeChoice == 1) { // Integer
            int arr[n];
            printf("Enter %d integers: ", n);
            for (i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }
            // Sorting
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if ((orderChoice == 1 && arr[j] > arr[j + 1]) ||
                        (orderChoice == 2 && arr[j] < arr[j + 1])) {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array: ");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }

        } else { // Character
            char arr[n];
            printf("Enter %d characters: ", n);
            for (i = 0; i < n; i++) {
                scanf(" %c", &arr[i]);
            }
            // Sorting
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if ((orderChoice == 1 && arr[j] > arr[j + 1]) ||
                        (orderChoice == 2 && arr[j] < arr[j + 1])) {
                        char t = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = t;
                    }
                }
            }
            printf("Sorted array: ");
            for (i = 0; i < n; i++) {
                printf("%c ", arr[i]);
            }
        }
    }

    else if (dimChoice == 2) { // Two Dimension
        printf("1. Ascending\n");
        printf("2. Descending\n");
        printf("Enter choice: ");
        scanf("%d", &orderChoice);

        printf("1. Integer\n");
        printf("2. Character\n");
        printf("Enter choice: ");
        scanf("%d", &typeChoice);

        printf("Enter rows and columns: ");
        scanf("%d %d", &rows, &cols);
        int total = rows * cols;

        if (typeChoice == 1) { // Integer
            int arr[rows][cols];
            printf("Enter %d integers:\n", total);
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    scanf("%d", &arr[i][j]);
                }
            }
            // Flatten
            int tempArr[total];
            k = 0;
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    tempArr[k++] = arr[i][j];
                }
            }
            // Sort
            for (i = 0; i < total - 1; i++) {
                for (j = 0; j < total - i - 1; j++) {
                    if ((orderChoice == 1 && tempArr[j] > tempArr[j + 1]) ||
                        (orderChoice == 2 && tempArr[j] < tempArr[j + 1])) {
                        temp = tempArr[j];
                        tempArr[j] = tempArr[j + 1];
                        tempArr[j + 1] = temp;
                    }
                }
            }
            // Print
            k = 0;
            printf("Sorted array:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    printf("%d ", tempArr[k++]);
                }
                printf("\n");
            }

        } else { // Character
            char arr[rows][cols];
            printf("Enter %d characters:\n", total);
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    scanf(" %c", &arr[i][j]);
                }
            }
            char tempArr[total];
            k = 0;
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    tempArr[k++] = arr[i][j];
                }
            }
            for (i = 0; i < total - 1; i++) {
                for (j = 0; j < total - i - 1; j++) {
                    if ((orderChoice == 1 && tempArr[j] > tempArr[j + 1]) ||
                        (orderChoice == 2 && tempArr[j] < tempArr[j + 1])) {
                        char t = tempArr[j];
                        tempArr[j] = tempArr[j + 1];
                        tempArr[j + 1] = t;
                    }
                }
            }
            k = 0;
            printf("Sorted array:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    printf("%c ", tempArr[k++]);
                }
                printf("\n");
            }
        }
    }

    return 0;
}
