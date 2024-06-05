/*
output --->

enter value for number of rows : 5
enter value for number of columns : 10

      * * * * * * * * * *
     * * * * * * * * * *
    * * * * * * * * * *
   * * * * * * * * * *
  * * * * * * * * * *
 * * * * * * * * * *

*/


#include <stdio.h>

int main(){
    int n , m ;
    printf("enter value for number of rows : ");
    scanf("%d", &n );
    printf("enter value for number of columns : ");
    scanf("%d", &m );
    printf("\n");

    for (int i = 1 ; i <= n ; i++ ){
        for ( int k = n ; k >= i ; k-- ){
            printf("  ");
        }
        for ( int j = 1 ; j <= m ; j++ ){
            if (j == 1 || j == m || i == 1 || i == n ){
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
