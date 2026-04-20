#include <stdio.h>

int main(void)
{
    int a, g;
    int i = 0;

    printf("정답입력: ");
    scanf("%d", &a);

    do {
        scanf("%d", &g);
        i++;

        if (a > g) {
            printf("%d<?\n", g);
        }
        else if (a < g) {
            printf("%d>?\n", g);
        }
        else {
            printf("%d==?\n", g);
        }

    } while (g != a);

    printf("%d\n", i);

    return 0;
}
