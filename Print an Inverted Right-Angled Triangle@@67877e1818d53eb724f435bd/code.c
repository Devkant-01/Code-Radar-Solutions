#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n ;
    scanf("%d", &n);
    for (int i = 0 ; j < n; i++) {
        for (int j = 0 ; j < n-1; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}