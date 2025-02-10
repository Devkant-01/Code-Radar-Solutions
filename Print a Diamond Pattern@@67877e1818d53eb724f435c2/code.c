#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for (int i = 0 ; i < 2 * n - 1; i++){
        for (int j = 0 ; j < 2 * n - 1 ; j++){
            if (i<n){
                if((j<n-i-1) || (j> n+i-1)){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
            else{
                if((j < i - n + 1) || (j > (2 * n - 2)-(i - n + 1 ))){
                    printf(" ");
                }
                else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}