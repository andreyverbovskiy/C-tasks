#pragma warning (disable:4996)
#include <stdio.h>
#include<string.h>




struct vehicle {
    char name[20];
    char model[20];
    char category[20];
    char registration_plate[20];
    char millage[20];
};

void list();
void frontpage();


char strn[] = "not ";
char stra[] = "available";
char str1[50];
char str2[50];
char str3[50];
char str4[50];
char str5[50];
char str6[50];
char str7[50];
char str8[50];
char str9[50];



void list() {
    struct vehicle audi = { "Audi", "A6", "Executive", "CYJ 577","999" };
    struct vehicle bmw = { "BMW","7-Series","Executive","CBD 532","500" };
    struct vehicle honda = { "Honda","CRV","Jeep/SUV","ADJ 170","1200" };
    struct vehicle ford = { "Ford","Fiesta","Economy/Supermini","CGM 427","540" };
    struct vehicle jaguar = { "Jaguar","F-Type S Cabriolet","Luxury/Prestige","AAA 123","140" };
    struct vehicle porsche = { "Porsche","Cayman","Luxury/Prestige","SSS 999","110" };
    struct vehicle lexus = { "Lexus","LS","Executive","DBN 863","1400" };
    struct vehicle fiat = { "Fiat","Panda","Mini","KJR 438","1367" };
    struct vehicle citroen = { "Citroen","C1","Mini","FVB 706","895" };



    printf("First car:                %s\n", audi.name);
    printf("Model:                    %s\n", audi.model);
    printf("Categoryl:                %s\n", audi.category);
    printf("Registration_plate:       %s\n", audi.registration_plate);
    printf("Millage:                  %s\n\n", audi.millage);


    printf("Second car:               %s\n", bmw.name);
    printf("Model:                    %s\n", bmw.model);
    printf("Categoryl:                %s\n", bmw.category);
    printf("Registration_plate:       %s\n", bmw.registration_plate);
    printf("Millage:                  %s\n\n", bmw.millage);


    printf("Third car:                %s\n", honda.name);
    printf("Model:                    %s\n", honda.model);
    printf("Categoryl:                %s\n", honda.category);
    printf("Registration_plate:       %s\n", honda.registration_plate);
    printf("Millage:                  %s\n\n", honda.millage);


    printf("Fourth car:               %s\n", ford.name);
    printf("Model:                    %s\n", ford.model);
    printf("Categoryl:                %s\n", ford.category);
    printf("Registration_plate:       %s\n", ford.registration_plate);
    printf("Millage:                  %s\n\n", ford.millage);


    printf("Fifth car:                %s\n", jaguar.name);
    printf("Model:                    %s\n", jaguar.model);
    printf("Categoryl:                %s\n", jaguar.category);
    printf("Registration_plate:       %s\n", jaguar.registration_plate);
    printf("Millage:                  %s\n\n", jaguar.millage);


    printf("Sixth car:                %s\n", porsche.name);
    printf("Model:                    %s\n", porsche.model);
    printf("Categoryl:                %s\n", porsche.category);
    printf("Registration_plate:       %s\n", porsche.registration_plate);
    printf("Millage:                  %s\n\n", porsche.millage);


    printf("Seventh car:              %s\n", lexus.name);
    printf("Model:                    %s\n", lexus.model);
    printf("Categoryl:                %s\n", lexus.category);
    printf("Registration_plate:       %s\n", lexus.registration_plate);
    printf("Millage:                  %s\n\n", lexus.millage);


    printf("Eigth car:                %s\n", fiat.name);
    printf("Model:                    %s\n", fiat.model);
    printf("Categoryl:                %s\n", fiat.category);
    printf("Registration_plate:       %s\n", fiat.registration_plate);
    printf("Millage:                  %s\n\n", fiat.millage);

    frontpage();
}


void check() {
    printf("Press 1 to see Executive\nPress 2 to see Jeep/SUV\nPress 3 to see Economy/Supermini\nPress 4 to see Luxury/Prestige\nPress 5 to see Mini\nPress * to see all cars\n\n");
    char numb[50];
    printf("Your input: ");
    scanf("%s", &numb);

    if (strcmp(numb, "1") == 0) {
        if (strcmp(str1, "not available") != 0 && strcmp(str2, "not available") != 0 && strcmp(str3, "not available") != 0) {
            printf("Available cars: Audi A6, BMW 7-Series, Lexus LS\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") == 0 && strcmp(str2, "not available") != 0 && strcmp(str3, "not available") != 0) {
            printf("Available cars: BMW 7-Series, Lexus LS\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") != 0 && strcmp(str2, "not available") == 0 && strcmp(str3, "not available") != 0) {
            printf("Available cars: Audi A6, Lexus LS\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") != 0 && strcmp(str2, "not available") != 0 && strcmp(str3, "not available") == 0) {
            printf("Available cars: Audi A6, BMW 7-Series\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") == 0 && strcmp(str2, "not available") == 0 && strcmp(str3, "not available") != 0) {
            printf("Available cars: Lexus LS\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") == 0 && strcmp(str2, "not available") != 0 && strcmp(str3, "not available") == 0) {
            printf("Available cars:BMW 7-Series\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") != 0 && strcmp(str2, "not available") == 0 && strcmp(str3, "not available") == 0) {
            printf("Available cars: Audi A6\n");
            frontpage();
        }
        else if (strcmp(str1, "not available") == 0 && strcmp(str2, "not available") == 0 && strcmp(str3, "not available") == 0) {
            printf("No available cars\n");
            frontpage();
        }
    }
    else if (strcmp(numb, "2") == 0) {
        if (strcmp(str4, "not available") != 0) {
            printf("Available cars: Honda CRV\n");
            frontpage();
        }
        else if (strcmp(str4, "not available") == 0) {
            printf("No available cars\n");
            frontpage();
        }

    }
    else if (strcmp(numb, "3") == 0) {
        if (strcmp(str5, "not available") != 0) {
            printf("Available cars: Ford Fiesta\n");
            frontpage();
        }
        else if (strcmp(str5, "not available") == 0) {
            printf("No available cars\n");
            frontpage();
        }

    }
    else if (strcmp(numb, "4") == 0) {
        if (strcmp(str6, "not available") != 0 && strcmp(str7, "not available") != 0) {
            printf("Available cars: Jaguar F-Type S Cabriolet,  Porsche Cayman\n");
            frontpage();
        }
        else if (strcmp(str6, "not available") == 0 && strcmp(str7, "not available") != 0) {
            printf("Available cars: Porsche Cayman\n");
            frontpage();
        }
        else if (strcmp(str6, "not available") != 0 && strcmp(str7, "not available") == 0) {
            printf("Available cars: Jaguar F-Type S Cabriolet\n");
            frontpage();
        }
        else if (strcmp(str6, "not available") == 0 && strcmp(str7, "not available") == 0) {
            printf("No available cars\n");
            frontpage();
        }


    }
    else if (strcmp(numb, "5") == 0) {
        if (strcmp(str8, "not available") != 0 && strcmp(str9, "not available") != 0) {
            printf("Available cars: Fiat Panda,  Citroen C1\n");
            frontpage();
        }
        else if (strcmp(str8, "not available") == 0 && strcmp(str9, "not available") != 0) {
            printf("Available cars: Citroen C1\n");
            frontpage();
        }
        else if (strcmp(str8, "not available") != 0 && strcmp(str9, "not available") == 0) {
            printf("Available cars: Fiat Panda\n");
            frontpage();
        }
        else if (strcmp(str8, "not available") == 0 && strcmp(str9, "not available") == 0) {
            printf("No available cars\n");
            frontpage();
        }


    }
    else if (strcmp(numb, "*") == 0) {
        list();
    }
}
void change() {
    printf("Print 1 for Executive\nPrint 2 for Jeep/SUV\nPrint 3 for Economy/Supermini\nPrint 4 for Luxury/Prestige\nPrint 5 for Mini\n\n");
    int num;
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    printf("Your input: ");
    scanf("%d", &num);

    if (num == 1) {
        printf("Print 1 to pick Audi A6,\nPrint 2 to pick BMW 7-Series,\nPrint 3 to pick Lexus LS\n");
        scanf("%d", &num1);

        if (num1 == 1) {
            printf("Your car is Audi A6\n");

            if (strcmp(str1, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str1, sizeof str1, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }
        if (num1 == 2) {
            printf("Your car is BMW 7-Series\n");

            if (strcmp(str2, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str2, sizeof str2, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }
        if (num1 == 3) {
            printf("Your car is Lexus LS\n");

            if (strcmp(str3, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str3, sizeof str3, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }
    }

    if (num == 2) {
        printf("Print 1 to pick Honda CRV\n");
        scanf("%d", &num2);

        if (num2 == 1) {
            printf("Your car is Honda CRV");

            if (strcmp(str4, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str4, sizeof str4, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }

    }

    if (num == 3) {
        printf("Print 1 to pick Ford Fiesta\n");
        scanf("%d", &num3);

        if (num3 == 1) {
            printf("Your car is Ford Fiesta\n");

            if (strcmp(str5, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str5, sizeof str5, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }

    }

    if (num == 4) {
        printf("Print 1 to pick Jaguar F-Type S Cabriolet, \n Print 2 to pick Porsche Cayman\n");
        scanf("%d", &num4);

        if (num4 == 1) {
            printf("Your car is Jaguar F-Type S Cabriolet");

            if (strcmp(str6, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str6, sizeof str6, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }
        if (num4 == 2) {
            printf("Your car is Porsche Cayman\n");

            if (strcmp(str7, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str7, sizeof str7, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }

    }
    if (num == 5) {
        printf("Print 1 to pick Fiat Panda, \n Print 2 to pick Citroen C1\n");
        scanf("%d", &num5);

        if (num5 == 1) {
            printf("Your car is Fiat Panda\n");

            if (strcmp(str8, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str8, sizeof str8, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }
        if (num5 == 2) {
            printf("Your car is Citroen C1\n");

            if (strcmp(str9, "not available") == 0) {
                printf("car is not available");
                frontpage();
            }
            else {
                snprintf(str9, sizeof str9, "%s%s", strn, stra);
                printf("You can have it!");
                frontpage();
            }
        }

    }
}


void frontpage() {
    char a[10];
    int exit = 0;
    printf("\n\n\n          WELCOME TO OUR CAR RENT!!! \n\n");
    printf("\n Print list if you would like to see our cars \n");
    printf("\n Print check if you would like to search available cars in given category\n");
    printf("\n Print change to change state of the car\n");
    printf("\n Press exit to exit\n");
    printf("\n Your input: ");
    scanf("%s", &a);


    if (strcmp(a, "list") == 0) {
        printf("\n");
        list();
        frontpage();
    }
    else if (strcmp(a, "check") == 0) {
        check();
    }
    else if (strcmp(a, "change") == 0) {
        change();
    }
    else if (strcmp(a, "exit") == 0) {
        printf("\nThank you, Good Bye!!!\n");
    }
}





int main(void) {
    frontpage();

}


