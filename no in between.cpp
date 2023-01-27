#include <stdio.h>

int main() {
    int P = 60;
    int Q = 70;
    int R = 3;
    int i;

    for (i = P; i <= Q; i++) {
        if (i % 10 == R || i / 10 == R) {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}
