#include <stdio.h>

int main() {
    int a, b, c;
    char s, q;

    scanf("%d %c %d %c %d", &a, &s, &b, &q, &c);

    int result;

    if (s == '+') result = a + b;
    else if (s == '-') result = a - b;
    else if (s == '*') result = a * b;
    else {
        printf("Invalid operator");
        return 0;
    }

    if (result == c)
        printf("Yes\n");
    else
        printf("%d\n", result);

    return 0;
}
