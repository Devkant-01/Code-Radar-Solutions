#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i++){
        int count = 1 ;
        for (int j = 0 ; j < n ; j++){
            if(j < n - i - 1) {
                printf(" ");
            }
            else {
                printf("%d",count);
                printf(" ");
                count++ ;
            }
        }
        printf("\n");
    }
    return 0;
}