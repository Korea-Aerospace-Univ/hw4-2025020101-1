#include <stdio.h>

int main(void)
{
    int x, y;
    int i = 0;

    printf("정답입력: ");
    scanf("%d", &x);

    do {
        scanf("%d", &y);
        i++;

        if (x > y) {
            printf("%d>?\n", y, y);
        }
        else if (y < x) {
            printf("%d<?\n", y, y);
        }
        else {
            printf("%d==?\n", y, y);
        }

    } while (y != x);

    printf("%d\n", i);

    return 0;
}
