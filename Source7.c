#pragma warning (disable:4996)
#include <stdio.h>
#include <string.h>

void change(char arr[]);

int main() {
    char arr[100];




    while (1) {
        printf("Enter your words, please: ");
        gets(arr);
        if (strcmp(arr, "stop") == 0) {
            break;
        }
        else if (strcmp(arr, "STOP") == 0) {
            break;
        }
        else {
            change(arr);
            printf("%s\n", arr);
        }

    }

    return 0;
}
void change(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        if (arr[i] == ' ') {
            arr[i] = 95;

        }
        else {
            arr[i] = arr[i];
        }
        i++;
    }
}
