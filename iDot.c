#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define P printf
#define R return
#define NL P("\n");
#define S struct
typedef long I;
#define CLOOP for (I i=0;i<c.s;i++)

S C { I s; I* n; };

I *mal(I n){ R(I*)malloc(n); }

void iDotA(S C c) { CLOOP c.n[i]=i; }
	
void iDotP(S C c) { CLOOP P("%ld ",c.n[i]); NL;}

S C iDot(S C c) {
    c.n = mal(c.s);
    iDotA(c);
    iDotP(c);
    R c;
}

S C iDotPow(S C c,I p) {
    CLOOP c.n[i]= (I)pow(c.n[i],p);
    iDotP(c);
    R c;
}

int main(void) {
    S C c={8,NULL};
    P("n=: i.%d\n",8); c=iDot(c);
    P("n=: n^2\n"); c=iDotPow(c,2);
}

