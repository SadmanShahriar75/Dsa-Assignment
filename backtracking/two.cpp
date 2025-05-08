#include <stdio.h>

int max_knights(int n) {
    if (n == 1) return 1;
    if (n == 2) return 4;
    return (n * n + 1) / 2;
}

int main() {
    int n;
    scanf("%d", &n);
    int result = max_knights(n);
    printf("%d\n", result);
    return 0;
}
