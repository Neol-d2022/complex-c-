#include "complex.h"
#include <cstdio>

int main(void) {
	complex a(1, 2);
	complex b(3, 6);
	complex c;
	
	c = a + b; printf("%lf + %lfi\n", c.a(), c.b());
	c = a - b; printf("%lf + %lfi\n", c.a(), c.b());
	c = a * b; printf("%lf + %lfi\n", c.a(), c.b());
	c = a * 5; printf("%lf + %lfi\n", c.a(), c.b());
	c = a / b; printf("%lf + %lfi\n", c.a(), c.b());
	c = b / 3; printf("%lf + %lfi\n", c.a(), c.b());
	c = a.e(); printf("%lf + %lfi\n", c.a(), c.b());
	c = b.ln(); printf("%lf + %lfi\n", c.a(), c.b());
	
	return 0;
}