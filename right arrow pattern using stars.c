/*

output ->
enter number of rows : 5
  
  
* 
* * 
* * * 
* * * * 
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
  
  // for upper half right angle triangle📐 
  for( int i = 1 ; i <=n ; i++ ){
    for ( int j = 1 ; j <= i ; j++){
      printf("* ");
    }
    printf("\n");
  }
   for( int i = n-1 ; i >= 1 ; i-- ){
    for ( int j = 1 ; j <= i ; j++){
      printf("* ");
    }
    printf("\n");
  }
  
  return 0;
}
