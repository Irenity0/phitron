#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i=i+1){
        if(i % 5 == 0){
            printf("%d Yes\n", i);
        }
        else {
            printf("%d No\n", i);
        }
    }
}