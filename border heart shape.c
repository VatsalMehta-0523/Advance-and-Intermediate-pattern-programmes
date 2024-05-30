/*

output for n = 5

    *         * 
   * *       * * 
  * * *     * * * 
 * * * *   * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
 * * * * * * * * * 
  * * * * * * * * 
   * * * * * * * 
    * * * * * * 
     * * * * * 
      * * * * 
       * * * 
        * * 
         * 

*/


#include <stdio.h>

int main()
{
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  
  for( int i = 1 ; i <=n ; i++ ){
    for ( int space = 1 ; space <= (n-i) ; space++ ){
      printf(" ");
    }
    for ( int j = 1 ; j <= i ; j++){
      if ( j == 1 || j == i ){
        printf("* ");
      }
      else{
        printf("  ");
      }
      
    }

    
    for ( int space = 1 ; space <= 2*(n-i) ; space++ ){
      printf(" ");
    }
    
    
    for ( int j = 1 ; j <= i ; j++){
      if ( j == 1 || j == i ){
        printf("* ");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
  n = 2*n ;
  for (int i = n ; i >= 1 ; i-- ){
    for (int space = 0 ; space < n-i ; space++){
      printf(" ");
    }
    for ( int j = i ; j >= 1 ; j--){
      if ( j == 1 || j == i ){
        printf("* ");
      }
      else{
        printf("  ");
      }
    }
    printf("\n");
  }
  
  return 0;
}