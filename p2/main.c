#include <stdio.h>

int main(void) {
    int N;
    char ch;

    scanf("%d", &N);
    getchar();

    int small_count = 0, num_count = 0;
    int max_small = 0, max_num = 0;

    for (int i = 0; i < N; i++) {
        scanf("%c",&ch);

        if (ch >= 'a' && ch <= 'z') {
            small_count++;
            num_count = 0;

            if (small_count > max_small)
                max_small = small_count;
        }
        else if (ch >= '0' && ch <= '9') {
            num_count++;
            small_count = 0;

            if (num_count > max_num)
                max_num = num_count;
        }
        else {
            small_count = 0;
            num_count = 0;
        }
    }

    printf("%d\n", max_small);
    printf("%d\n", max_num);

    return 0;
}
