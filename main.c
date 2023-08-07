

#include <stdio.h>

int main(void) {
    int l, c;
    char impressao[5][5];

    l = 0;

    while (l < 5) {
        if (l == 0 || l == 4) {
            c = 0;
            while (c < 5) {
                impressao[l][c] = 'X';
                c++;
            }
        } else {
            c = 0;
            while (c < 5) {
                if (c == 0 || c == 4) {
                    impressao[l][c] = 'X';
                } else {
                    impressao[l][c] = ' ';
                }
                c++;
            }
        }
        l++;
    }

    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            printf("%c", impressao[l][c]);
        }
        printf("\n");
    }

    return 0;
}
