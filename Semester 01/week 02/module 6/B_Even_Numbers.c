#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    if(n == 1) printf("-1");
    for (long long i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%lld\n", i);
        }
    }
    return 0;
}