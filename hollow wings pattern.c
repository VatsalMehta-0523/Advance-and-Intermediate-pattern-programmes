#include <stdio.h>

int main(){
    int n ;
    printf("enter number of rows : ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1 ; i <= n ; i++ ){
        for (int j = 1 ; j <= i ; j++ ){
            if (j == 1 || j == i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int space = 1 ; space <= 2*(n-i) ; space++ ){
            printf("  ");
        }

        for (int k = 1 ; k <= i ; k++ ){
            if ( k == 1 || k == i ){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    for (int i = n-1 ; i >= 1 ; i-- ){
        for (int j = 1 ; j <= i ; j++ ){
            if (j == 1 || j == i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        for(int space = 1 ; space <= 2*(n-i) ; space++ ){
            printf("  ");
        }
        for (int k = 1 ; k <= i ; k++ ){
            if ( k == 1 || k == i ){
                printf(" *");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0 ;
}
