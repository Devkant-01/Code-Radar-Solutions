#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    int product = n ;
    for (int i = 1 ; i < 11 ; i++){
        printf("%d",n);
        printf(" x ");
        printf("%d",i);
        printf(" = ");
        printf("%d",product);
        product = n * (i+1) ;
        printf("\n");
    }
    return 0;
}