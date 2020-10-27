#pragma warning (disable:4996)
#include <stdio.h>

void encryption(char arr[], int move);

int main() {

    char arr[99];
    int move;
    int i = 0;

    printf("Enter the text, please: ");
    fgets(arr, sizeof(arr), stdin);

    printf("On how many latters would you like to move?: ");
    scanf("%d", &move);

    for (i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }


    printf("Text after encryption:\n");
    encryption(arr, move);
    printf("Text after decryption:\n");
    encryption(arr, -move);

    return 0;
}


void encryption(char arr[], int move) {
    int i = 0;
    char a;

    while (arr[i] != '\0') {
        if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] += move;
        }
        else if (arr[i] = 32) {
            arr[i] = arr[i];
        }
        i++;
    }
    printf("%s\n", arr);
}
