#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=12;i++)
    {
        int multiplication = i * n;
        printf("%d * %d = %d\n", n, i, multiplication);
    }
    return 0;
}