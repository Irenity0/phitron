#include <stdio.h>
#include <string.h>

int main() {
    char F1[50], S1[50];
    char F2[50], S2[50];

    // Read first person's first and second name
    scanf("%s %s", F1, S1);
    // Read second person's first and second name
    scanf("%s %s", F2, S2);

    // Compare second names
    if (strcmp(S1, S2) == 0) {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }

    return 0;
}
