#include <stdio.h>

int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    if (rows > 0) {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                printf("01");
            }
            printf("\n");
        }
    }

    return 0;
}
