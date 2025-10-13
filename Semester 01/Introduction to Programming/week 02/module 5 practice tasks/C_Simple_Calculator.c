#include <stdio.h>
 
int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);
 
    long long summation = x + y;
    long long multiplication = x * y;
    long long subtraction = x - y;
 
    printf("%lld + %lld = %lld\n", x, y, summation);
    printf("%lld * %lld = %lld\n", x, y, multiplication);
    printf("%lld - %lld = %lld", x, y, subtraction);
 
    return 0;
}