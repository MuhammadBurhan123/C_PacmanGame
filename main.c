#include <stdio.h>

void groud() {
    int height = 20, width = 50;

    for (int i = 1; i <= height ; i++) {
        for (int j = 1; j <= width ; j++) {
            if (i == 1 || i == height || j == 1 || j == width) {
                printf("*");
            } else {
                if((i == 3 && j >= 2 && j <= 10) || (i == 3 && j >= 40 && j <= 49) || (i == 5 && j >= 15 && j <= 35) || (i == 7 && j >= 2 && j <= 20) || (i == 7 && j >= 30 && j <= 49) || (i == 9 && j >= 10 && j <= 40)){
                    printf("#");
                }else if (i == 19 && j == 49){
                    printf("C");
                }else{
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}

int main() {

    char action;

    groud();

    scanf("%c", action);
    return 0;
}
