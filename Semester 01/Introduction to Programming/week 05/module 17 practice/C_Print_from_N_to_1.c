#include<stdio.h>
void print_n(int n,int first){
    if(n==0){
        return;
    }
    if(!first){
        printf(" ");
    }
    printf("%d", n);
    print_n(n-1, 0);
}
int main(){
    int n;
    scanf("%d", &n);
    print_n(n, 1);

    return 0;
}