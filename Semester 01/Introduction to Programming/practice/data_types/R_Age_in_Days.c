#include<stdio.h>
int main(){
    long long n;
    scanf("%lld", &n);

    int year = n / 365;
    int month = (n % 365) / 30;
    int days = (n % 365) % 30;
    printf("%d years\n%d months\n%d days", year, month, days);
    return 0;
}