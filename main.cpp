#include "complex.h"
#include <cstdio>
#include <cmath>

int main(void) {
	complex a(1, 2);
	complex b(3, 6);
	complex c;
	
	printf("%lf\n", complex(3, 4).a());
	printf("%lf\n", complex(3, 4).b());
	printf("%lf\n", complex(3, 4).R());
	printf("%lf\n", complex(3, 4).GetAngle());
	c = complex(3, 4).unit(); printf("%lf + %lfi\n", c.a(), c.b());
	c = complex::GetRotation(M_PI / 4); printf("%lf + %lfi\n", c.a(), c.b());
	c = a; c.SetA(6); printf("%lf + %lfi\n", c.a(), c.b());
	c = a; c.SetB(11); printf("%lf + %lfi\n", c.a(), c.b());
	c = complex(3, 4).SetR(10); printf("%lf + %lfi\n", c.a(), c.b());
	c = complex(3, 4).SetAngle(M_PI / 2); printf("%lf + %lfi\n", c.a(), c.b());
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