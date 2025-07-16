#include <stdio.h>
int main() {
    int m[10][10] = {0};

    int x, y;

    x = 2; y = 4;
    for (int i = 0; i < 3; i++)
        for (int j = -2; j <= 2; j++)
            if (abs(j) <= i) {
                int xi = x + i;
                int yj = y + j;
                if (xi >= 0 && xi < 10 && yj >= 0 && yj < 10)
                    m[xi][yj] = 1;
            }

    x = 5; y = 5;
    for (int i = -1; i <= 1; i++)
        for (int j = -2; j <= 2; j++) {
            int xi = x + i;
            int yj = y + j;
            if ((i == 0 || j == 0) && xi >= 0 && xi < 10 && yj >= 0 && yj < 10)
                m[xi][yj] = 1;
        }

    x = 7; y = 7;
    for (int i = -1; i <= 1; i++)
        for (int j = -2; j <= 2; j++)
            if (abs(i) + abs(j) == 2 || (i == 0 && j == 0)) {
                int xi = x + i;
                int yj = y + j;
                if (xi >= 0 && xi < 10 && yj >= 0 && yj < 10)
                    m[xi][yj] = 1;
            }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }

    return 0;
}
