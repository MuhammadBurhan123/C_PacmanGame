#include <stdio.h>

void drawGround(int pacman_x, int pacman_y) {
    int height = 20, width = 50;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            if (i == 1 || i == height || j == 1 || j == width) {
                printf("*");
            } else {
                if ((i == 3 && j >= 2 && j <= 10) || (i == 3 && j >= 40 && j <= 49) ||
                    (i == 5 && j >= 15 && j <= 35) || (i == 7 && j >= 2 && j <= 20) ||
                    (i == 7 && j >= 30 && j <= 49) || (i == 9 && j >= 10 && j <= 40)) {
                    printf("#");
                } else if (i == pacman_y && j == pacman_x) {
                    printf("C");
                } else {
                    printf(".");
                }
            }
        }
        printf("\n");
    }
}

void move(char direction, int *pacman_x, int *pacman_y) {
    switch (direction) {
        case 'w':
            if (*pacman_y > 1) {
                (*pacman_y)--;
            }
            break;
        case 's':
            if (*pacman_y < 19) {
                (*pacman_y)++;
            }
            break;
        case 'a':
            if (*pacman_x > 2) { 
                (*pacman_x)--;
            }
            break;
        case 'd':
            if (*pacman_x < 49) {
                (*pacman_x)++;
            }
            break;
        default:
            break;
    }
}

int main() {
    int pacman_y = 19, pacman_x = 49;

    char key;
    do {
        printf("\e[1;1H\e[2J");

        drawGround(pacman_x, pacman_y);

        printf("Press a key (w/a/s/d) or press Esc to exit: ");
        scanf(" %c", &key);

        if (key != 27) { 
            move(key, &pacman_x, &pacman_y);

        }
    } while (key != 27);

    return 0;
}
