#include<stdio.h>
void print_n(int n){
    if(n==0){
        return;
    }
    print_n(n-1);
    printf("%d\n", n);
}
int main(){
    int n;
    scanf("%d", &n);
    print_n(n);

    return 0;
}