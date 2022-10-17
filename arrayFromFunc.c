#include <stdio.h>
#define P printf
#define LOOP(a) for (int x=1; x<*a+1; x++) P ("%d\n", a[x])

int* f() {
    static int b[]={5, 10,20,30,40,50};
    return(b);
}

int main() {

	int* c=f();
	LOOP(c);

}

