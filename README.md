# Complex Object (C++)

- - -

## Introduction

This is one of my homework in univerisity (another vase actually), written in *C++*.

I spent 3 hours of one boring weekend afternoon in this project in order to get passed.

## How to Use

Copy **both complex.c and complex.h** into *source code* folder.

Don't forget to *include* the header file `` #include "complex.h" ``

## Public Function Examples

*	**`` complex::complex(double __a, double __b) ``** (*constructor*)
*	**`` complex::complex() ``** (*constructor*)
	*	Construct a complex object to represent a complex number in math
	*	For example:
		*	`` complex a(1, 2) ``, a represents `` 1 + 2i ``
        *	`` complex a(3, 6) ``, a represents `` 3 + 6i ``
			*	`` i `` is the *imaginary unit*.
	*	When constructor with no arguments `` complex::complex() `` get called,
		*	it's equivalent to call to `` complex::complex(0, 0) ``

- - -

*	**`` double complex::a() const ``** (*member function*)
	*	Returns *real part* of this complex number
	*	For example:
		*		printf("%lf\n", complex(3, 4).a());
	*	Sample outputs `` 3.000000 ``

- - -

*	**`` double complex::b() const ``** (*member function*)
	*	Returns *imaginary part* of this complex number
	*	For example:
		*		printf("%lf\n", complex(3, 4).b());
	*	Sample outputs `` 4.000000 ``

- - -

*	**`` double complex::R() const ``** (*member function*)
	*	Returns *radius*.
	*	For example:
		*		printf("%lf\n", complex(3, 4).R());
    *	Sample outputs `` 5.000000 ``
        
- - -

*	**`` complex complex::unit() const ``** (*member function*)
	*	Return unit complex object, whose radius is exactly `` 1 ``.
	*	For example:
		*	
              //
              complex a(3, 4);
              complex b = a.unit();
              printf("%lf + %lfi\n", b.a(), b.b());
	*	Sample outputs `` 0.600000 + 0.800000i ``

- - -

*	**`` complex add(complex val) const ``** (*member function*)
*	**`` complex operator+(const complex& val) const ``** (*member function*)
	*	Return sum of this number and `` val ``.
	*	For example:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.add(b);
              // complex c = a + b // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` 4.000000 + 8.000000i ``

- - -

*	**`` complex minus(complex val) const ``** (*member function*)
*	**`` complex operator-(const complex& val) const ``** (*member function*)
	*	Return difference of this number and `` val ``.
	*	For example:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.minus(b);
              // complex c = a - b // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` -2.000000 + -4.000000i ``

- - -

*	**`` complex mul(complex val) const ``** (*member function*)
*	**`` complex operator*(const complex& val) const ``** (*member function*)
	*	Return product of this number and `` val ``.
	*	For example:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.mul(b);
              // complex c = a * b // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` -9.000000 + 12.000000i ``

- - -

*	**`` complex mul(double val) const ``** (*member function*)
*	**`` complex operator*(double val) const ``** (*member function*)
	*	Return product of this number and real number `` val ``
	*	For example:
		*	
              //
              complex a(1, 2);
              complex c = a.mul(5);
              // complex c = a * 5 // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` 5.000000 + 10.000000i ``

- - -

*	**`` complex div(complex val) const ``** (*member function*)
*	**`` complex operator/(const complex& val) const ``** (*member function*)
	*	Return quotient of this number and `` val ``.
	*	For example:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.div(b);
              // complex c = a / b // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` -0.555556 + -0.000000i ``

- - -

*	**`` complex div(double val) const ``** (*member function*)
*	**`` complex operator/(double val) const ``** (*member function*)
	*	Return quotient of this number and real number `` val ``.
	*	For example:
		*	
              //
              complex b(3, 6);
              complex c = b.div(3);
              // complex c = b / 3 // Does the same thing.
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` 1.000000 + 2.000000i ``

- - -

*	**`` complex e() const ``** (*member function*)
	*	Return natural exponential of this object.
	*	The inverse function of the natural logarithm function **`` complex ln() const ``**.
	*	For example:
		*	
              //
              complex a(1, 2);
              complex c = a.e();
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` -1.131204 + 2.471727i ``

- - -

*	**`` complex ln() const ``** (*member function*)
	*	Return natural logarithm of this object.
	*	The inverse function of the natural exponential function **`` complex e() const ``**.
	*	For example:
		*	
              //
              complex b(3, 6);
              complex c = b.ln();
              printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` 1.903331 + 1.107149i ``

- - -
- - -

#### �c�餤�� (Traditional Chinese)

# �Ƽƪ��� (C++)

- - -

## ²��

�o�O�ڦb�j�Ǯɪ��Y�@���Ұ�@�~(���S�O�t�@�Ӹ˹��~), ��*C++*�g��.

���F���Q���u�n��Y�ӵL�᪺�P����3�Ӥp�ɪ�b�o�W��


## �p��ϥ�

�N�o**���**�ɮ�**complex.c �P complex.h** �ƻs��*��l�X�ؿ�*�U.

�O�ѤF*�ޤJ*���Y�ɮ� `` #include "complex.h" ``

## ���Ψ�ƽd��

*	**`` complex::complex(double __a, double __b) ``** (*�غc�l*)
*	**`` complex::complex() ``** (*�غc�l*)
	*	�غc�i�H�N��ƾṊ̀��Ƽƪ�����.
	*	�d��:
		*	`` complex a(1, 2) ``, �N�� `` 1 + 2i ``
        *	`` complex a(3, 6) ``,�N�� `` 3 + 6i ``
			*	�䤤`` i `` �O *��Ƴ��*.
	*	��S���Ѽƪ��غc�l `` complex::complex() `` �Q�I�s��,
		*	�۷��I�s�H�U�{���X `` complex::complex(0, 0) ``

- - -

*	**`` double complex::a() const ``** (*�������*)
	*	�^�ǳo�ӽƼƪ�*�곡*.
	*	�d��:
		*		printf("%lf\n", complex(3, 4).a());
	*	�d�ҿ�X `` 3.000000 ``

- - -

*	**`` double complex::b() const ``** (*�������*)
	*	�^�ǳo�ӽƼƪ�*�곡*.
	*	�d��:
		*		printf("%lf\n", complex(3, 4).b());
	*	�d�ҿ�X `` 4.000000 ``

- - -

*	**`` double complex::R() const ``** (*�������*)
	*	�^�ǳo�ӽƼƪ�*�b�|*.
	*	�d��:
		*		printf("%lf\n", complex(3, 4).R());
    *	�d�ҿ�X `` 5.000000 ``
        
- - -

*	**`` complex complex::unit() const ``** (*�������*)
	*	�^�ǳ��Ƽ�, �����b�|���n�O `` 1 ``.
	*	�d��:
		*	
              //
              complex a(3, 4);
              complex b = a.unit();
              printf("%lf + %lfi\n", b.a(), b.b());
	*	�d�ҿ�X `` 0.600000 + 0.800000i ``

- - -

*	**`` complex add(complex val) const ``** (*�������*)
*	**`` complex operator+(const complex& val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP `` val `` ���M.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.add(b);
              // complex c = a + b // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` 4.000000 + 8.000000i ``

- - -

*	**`` complex minus(complex val) const ``** (*�������*)
*	**`` complex operator-(const complex& val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP `` val `` ���t.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.minus(b);
              // complex c = a - b // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` -2.000000 + -4.000000i ``

- - -

*	**`` complex mul(complex val) const ``** (*�������*)
*	**`` complex operator*(const complex& val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP `` val `` ���n.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.mul(b);
              // complex c = a * b // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` -9.000000 + 12.000000i ``

- - -

*	**`` complex mul(double val) const ``** (*�������*)
*	**`` complex operator*(double val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP��� `` val `` ���n.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex c = a.mul(5);
              // complex c = a * 5 // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` 5.000000 + 10.000000i ``

- - -

*	**`` complex div(complex val) const ``** (*�������*)
*	**`` complex operator/(const complex& val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP `` val `` ����.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex b(3, 6);
              complex c = a.div(b);
              // complex c = a / b // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` -0.555556 + -0.000000i ``

- - -

*	**`` complex div(double val) const ``** (*�������*)
*	**`` complex operator/(double val) const ``** (*�������*)
	*	�^�ǳo�ӽƼƻP��� `` val `` ����.
	*	�d��:
		*	
              //
              complex b(3, 6);
              complex c = b.div(3);
              // complex c = b / 3 // �P�ˮĪG
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` 1.000000 + 2.000000i ``

- - -

*	**`` complex e() const ``** (*�������*)
	*	�^�ǳo�ӽƼƪ��۵M����.
	*	�O�۵M��� **`` complex ln() const ``** ���Ϩ��.
	*	�d��:
		*	
              //
              complex a(1, 2);
              complex c = a.e();
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` -1.131204 + 2.471727i ``

- - -

*	**`` complex ln() const ``** (*�������*)
	*	�^�ǳo�ӽƼƪ��۵M���.
	*	�O�۵M���� **`` complex e() const ``** ���Ϩ��.
	*	�d��:
		*	
              //
              complex b(3, 6);
              complex c = b.ln();
              printf("%lf + %lfi\n", c.a(), c.b());
	*	�d�ҿ�X `` 1.903331 + 1.107149i ``