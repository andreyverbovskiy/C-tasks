#pragma warning (disable:4996)
#include <stdio.h>
#define length 50

void sort3(int* pa[3]);
int main(void) {
    FILE* file;
    file = fopen("file.txt", "r");
    char array[length];
    int arr[length];
    int a = 0;
    int i;
    int j;
    fgets(array, length, file);
    sscanf(array, "%d %d %d", &arr[0], &arr[1], &arr[2]);

    if (file == NULL) {
        printf("No such file was found :(");
        return 0;
    }

    for (i = 0; i < 3; ++i) {

        for (j = i + 1; j < 3; ++j) {

            if (arr[i] > arr[j]) {

                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;

            }
        }
    }

    file = fopen("file.txt", "w");
    fprintf(file, "%d %d %d", arr[0], arr[1], arr[2]);
    fclose(file);

    return 0;
}
