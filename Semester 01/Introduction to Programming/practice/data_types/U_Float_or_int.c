#include<stdio.h>
#include<math.h>
int main(){
    float n;
    scanf("%f", &n);
    int integer_part = (int)n;
    if (n == integer_part) {
        printf("int %d\n", integer_part);
    } else {
        printf("float %d %.3f\n", integer_part, n - integer_part);
    }
    return 0;
}