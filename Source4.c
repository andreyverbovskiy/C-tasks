#include <stdio.h>
#pragma warning (disable:4996)

int main() {
    int h, mm, h2, mm2;


    printf("Enter current time (hh:mm): ");
    scanf("%d:%d", &h, &mm);

    if (h < 0 || h > 23 || mm < 0 || mm > 59) {
        printf("Wrong input!\n");
    }


    printf("Current time - %02d:%02d\n", h, mm);

    printf("How long will your sleep last? (hh:mm): ");
    scanf("%d:%d", &h2, &mm2);

    if (h2 < 0 || h2 > 23 || mm2 < 0 || mm2 > 59) {
        printf("Wrong input!\n");
    }


    printf("You are going to sleep for %02d:%02d hours.\n", h2, mm2);



    mm += mm2;
    if (mm > 59 || mm == 60) {
        mm = mm - 60;
        h += 1;
    }
    h += h2;
    if (h > 23 || h == 24) {
        h = h - 24;
    }

    printf("You will wake up at %02d:%02d.", h, mm);
    return 0;

}