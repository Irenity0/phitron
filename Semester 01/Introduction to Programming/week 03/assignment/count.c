#include <stdio.h>

int main() {
    char s[10001];
    int frequency[26] = {0};
    scanf("%s", s);

    for (int i = 0; s[i]; i++)
        frequency[s[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (frequency[i] > 0)
            printf("%c - %d\n", 'a' + i, frequency[i]);

    return 0;
}
