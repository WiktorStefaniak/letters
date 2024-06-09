#include <iostream>
#include "letters.h"

void menu(void) {
    printf("Changing letters \n\n");
    printf("1 - Enter text\n");
    printf("2 - Display text\n");
    printf("3 - Determine the lenght of text\n");
    printf("4 - Change text to smaller letters\n");
    printf("5 - Change text to bigger letters\n");
    printf("0 - EXIT\n\n");
    printf("Select an option : \n");
}

int main()  {
    char text[80] ="";
    int option = 0;
    do{
        menu();
        scanf("%d", &option);
        clear();
        switch(option) {
            case 0:
                break;
            case 1:
                printf("Entering text\n\n");
                enterText(text);
                break;
            case 2:
                printf("Displaying text\n\n");
                printText(text);
                break;
            case 3:
                printf("Text length = %d\n", textLenght(text));
                break;
            case 4:
                lowerCase(text);
                break;
            case 5 :
                upperCase(text);
                break;
            default:
                printf("Choose the right option!!!");

        }
    }
    while(option != 0);
    printf("END");

    return 0;
}