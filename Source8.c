#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

void change(char arr[]);

int main() {
    char arr[100];




    while (1) {
        printf("Enter a string: ");
        gets(arr);
        if (strcmp(arr, "stop") == 0) {
            break;
        }
        else if (strcmp(arr, "STOP") == 0) {
            break;
        }
        else {
            change(arr);
        }

    }

    return 0;
}
void change(char arr[]) {

    int i;

    for (i = 0; arr[i] != '\0'; i++) {
        if (i == 0) {
            if ((arr[i] >= 97 && arr[i] <= 122))
                arr[i] = arr[i] - 32;
        }
        else if (arr[i] == 32) {
            i++;
            if (arr[i] >= 97 && arr[i] <= 122) {
                arr[i] = arr[i] - 32;
            }
        }
    }
    printf("%s\n", arr);
}
