#include<stdio.h>

int main() {

    int columns;

    printf(" Enter the number of columns(<40): ");
    scanf(" %d", &columns);

    for (int i = 1; i <= 5; i++)
        printf("\n");

    int i = 1;
    int c = 1;
    int space = columns - 1;

    while (i <= columns) {
        while (space + 50 > columns - 1) {
            printf(" ");
            space--;
        }
        space = columns - 1;
        c = 1;
        while (c <= 2 * columns - 1) {
            if (c >= columns - (i - 1) && c <= columns + (i - 1)) {
                printf("*");
            }
            else {
                printf(" ");
            }
            c++;
        }
        printf("\n");

        i++;
    }

}