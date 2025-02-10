#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for ( int i = 0 ; i < n ; i++){
        int num = 1 ;
        for ( int j = 0 ; j < n-i ; j++){
            printf("%d",num);
            printf(" ");
            num++ ;
        }
        printf("\n");
    }
    return 0;
}