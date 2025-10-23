#include <stdio.h>

int main() {
    int n, idx;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &idx);

    if (idx >= 0 && idx < n) {
        for (int i = idx; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
