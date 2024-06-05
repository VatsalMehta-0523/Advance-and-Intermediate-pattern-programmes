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

    for (int i = 0 ; i <= n ; i++ ){
        for ( int k = n ; k >= i ; k-- ){
            printf("  ");
        }
        for ( int j = 1 ; j <= m ; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    return 0 ;
}
