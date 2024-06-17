/*
output --->

enter value for number of rows : 5

     *
    * *
   *   *
  *     *
 *       *
  *     *
   *   *
    * *
     *

*/

#include <stdio.h>

int main(){
    int n , m ;
    printf("enter value for number of rows : ");
    scanf("%d", &n );
    printf("\n");


    for (int i = n ; i >= 1 ; i-- ){
        for ( int k = n ; k >= i ; k-- ){
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++ ){
            if( i == n || j == 1 || j == i ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    for (int i = 2 ; i <= n ; i++ ){
        for ( int k = n ; k >= i ; k-- ){
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++ ){
            if(j == 1 || j == i || i == n ){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0 ;
}
