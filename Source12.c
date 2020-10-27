#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>
#define length 100

struct items {
    char name[length];
    float price;
}

items[length];


int main() {
    char arr[length];
    int i = 0;
    char document[length];
    char a[length];
    float b = 0;
    int j;


    printf("Enter the name of the file, please: ");
    scanf("%s", document);
    printf("\n");

    FILE* file;
    file = fopen(document, "r");

    if (file == NULL) {
        printf("Such file(%s) does not exist", document);
        return 0;
    }

    while (feof(file) != 1) {
        if (fgets(arr, length, file) != NULL) {
            i++;

            if (i <= length) {
                if (sscanf(arr, "%f;%[^\n]", &b, a) != 0) {
                    items[i - 1].price = b;
                    strcpy(items[i - 1].name, a);
                }

            }
            else {
                printf("Number of items exceeds the limit of%d\n", length);
                return 0;
            }
        }
    }

    printf("%s                                                 %s\n", " NAME", "PRICE\n");

    for (j = 0; j < i; j++) {
        printf("%s                                          %0.2f\n", items[j].name, items[j].price);
    }
    fclose(file);
    return 0;
}