#include <stdio.h>
#include <limits.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        long long min_value = LLONG_MAX;
        long long ans;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++){
                ans = arr[i] + arr[j] + (j+1) - (i+1);
                // printf("%d", ans);
                if(ans < min_value){
                    min_value = ans;
                }
            }
        }
        printf("%lld\n", min_value);
    }
    return 0;
}