#pragma warning (disable:4996)
#include <stdio.h>


void multiplication(int mat1[1][3], int mat2[3][3], int outcome[1][3]);
int main()
{

    int i, j, k;
    int mat1[1][3];
    int mat2[3][3];
    int outcome[1][3];


    for (i = 0; i < 1; ++i) {

        for (j = 0; j < 3; ++j) {

            printf("Enter element (%d,%d) for vector, please: ", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }

    for (i = 0; i < 1; ++i) {

        for (j = 0; j < 3; ++j) {

            printf("%d\t", mat1[i][j]);

        }
        printf("\n");
    }

    for (i = 0; i < 3; ++i) {

        for (j = 0; j < 3; ++j) {

            printf("Enter element (%d,%d) for matrix, please: ", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }
    for (i = 0; i < 3; ++i) {

        for (j = 0; j < 3; ++j) {

            printf("%d\t", mat2[i][j]);

        }
        printf("\n");
    }

    multiplication(mat1, mat2, outcome);

    printf("Result is \n");
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", outcome[i][j]);
        printf("\n");
    }

    return 0;
}

void multiplication(int mat1[1][3], int mat2[3][3], int outcome[1][3]) {
    int a, b, c;
    for (a = 0; a < 1; ++a) {

        for (b = 0; b < 3; ++b) {

            outcome[a][b] = 0;
            for (c = 0; c < b; c++) {
                outcome[a][b] += mat1[a][b] * mat2[a][b];
            }
        }
    }

}



