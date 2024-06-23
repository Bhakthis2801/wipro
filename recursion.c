#include <stdio.h>

int geometric_sequence(int n, int a1, int r) {
    if (n == 1) {
        return a1;
    } else {
        return geometric_sequence(n - 1, a1, r) * r;
    }
}

int main() {
    int n = 5;
    int a1 = 3;
    int r = 2;
    printf("The %dth term in the sequence is: %d\n", n, geometric_sequence(n, a1, r));
    return 0;
}
