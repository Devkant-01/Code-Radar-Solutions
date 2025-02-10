#include <stdio.h>

int main() {
    int n ;
    scanf("%d",&n);
    for(int i = 0 ; i < n ; i++){
        int count = 1 ;
        for(int j = 0 ; j < 2*n -1 ; j++){
            if((j<n-i-1)||(j>n+i-1)){
                printf(" ");
            }
            else{
                printf("%d",count);
                if (j < n - 1){
                    count++ ;
                }
                else {
                    count-- ;
                }
            }
        }
        printf("\n");
    }
    return 0;
}