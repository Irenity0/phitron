#include<stdio.h>
int main(){
    long long a,b,c,d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    long long m = (a *b) % 100;
    m = (m * c) % 100;
    m = (m * d) % 100;
    printf("%02lld", m);
    return 0;
}