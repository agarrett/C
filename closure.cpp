#define P printf
#define V auto

#include <iostream>
#define CHK  P( "\nn = %d \n" , n )

int main() {
  P ("C++ closures\n~~~~~~~~~~~~\n");
  V n=1; CHK;
  
  V C1 = [n](const char *c) {
  	P ( "C1: c = '%s' Captured n = %d \n",
  	     c, n );
  };
  
  C1 ( "Main n = 1" );
  n++; CHK;
  
  V C2 = [n](const char *c) {
   	P ( "C2: c = '%s' Captured n = %d \n",
  	     c, n );
  };
  
  C1 ( "Main n = 2");
  C2 ( "Main n = 2");
  n++; CHK;
  
  C1 ( "Main n = 3");
  C2 ( "Main n = 3");
  CHK;
  
  P("\nAND you can't mod (n++) closure's 'captured' state");
}
