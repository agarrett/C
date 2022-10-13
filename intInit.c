#define P printf
typedef int  I;

#include <stdio.h>

I main() {
	// C land
	// ------
	I v=0;
	P("v=%d\n", v);

	I v1={0};
	P("v1=%d\n", v1);

	// C++ land
	// --------
	I v2{0}; 
	P("v2=%d\n", v2);

	I v3(0);
	P("v3=%d\n", v3);

}

