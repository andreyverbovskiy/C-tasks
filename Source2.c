#pragma warning (disable:4996)
#include <stdio.h>

int main()
{
    float a;
    int i;
    float arr[12];
    float sum = 0;

    for (int i = 0; i < 12; i++) {
        printf("Enter your yearly gross income %d, please: ", i);
        scanf("%f", &arr[i]);
    }



    for (i = 0; i < 12; i++) {
        if (i != 6) {

            printf("element[%d] = %0.4f\n", i, arr[i] / 12.5);
            sum += arr[i] / 12.5;

        }

        if (i == 6) {


            printf("element[%d] = %0.4f\n", i, (arr[i] / 12.5) * 1.5);
            sum += (arr[i] / 12.5) * 1.5;


        }


    }

    printf("total       =  %0.4f", sum);
    return 0;
}
