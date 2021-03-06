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

			printf("%lf\n", complex(3, 4).a());
	*	Sample outputs `` 3.000000 ``

- - -

*	**`` double complex::b() const ``** (*member function*)
	*	Returns *imaginary part* of this complex number
	*	For example:

			printf("%lf\n", complex(3, 4).b());
	*	Sample outputs `` 4.000000 ``

- - -

*	**`` double complex::R() const ``** (*member function*)
	*	Returns *radius*.
	*	For example:

			printf("%lf\n", complex(3, 4).R());
	*	Sample outputs `` 5.000000 ``

- - -

*	**`` double complex::GetAngle() const ``** (*member function*)
	*	Returns *angle* to +x axis.
	*	If the radius is **0**, the function **throw** a `` const char * `` **exception** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	For example:

			printf("%lf\n", complex(3, 4).GetAngle());
    *	Sample outputs `` 0.927295 ``

- - -

*	**`` complex complex::unit() const ``** (*member function*)
	*	Return *unit complex* object, whose radius is exactly `` 1 ``.
	*	If the radius is **0**, the function **throw** a `` const char * `` **exception** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	For example:

			complex a(3, 4);
			complex b = a.unit();
			printf("%lf + %lfi\n", b.a(), b.b());
	*	Sample outputs `` 0.600000 + 0.800000i ``

- - -

*	**`` complex complex::GetRotation(double x) ``** (*static function*)
	*	Returns a *unit complex* with angle `` x ``.
	*	For example:

			complex a = GetRotation(M_PI / 4);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 0.707107 + 0.707107i ``

- - -

*	**`` complex& complex::SetA(double __a) ``** (*member function*)
	*	Sets *real part* of this complex number to  `` __a ``.
	*	Returns reference to *itself*.
	*	For example:

			complex a(1, 2);
			a.SetA(6);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 6.000000 + 2.000000i ``

- - -

*	**`` complex& complex::SetB(double __b) ``** (*member function*)
	*	Sets *imaginary part* of this complex number to  `` __b ``.
	*	Returns reference to *itself*.
	*	For example:

			complex a(1, 2);
			a.SetB(11);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 1.000000 + 11.000000i ``

- - -

*	**`` complex& complex::SetR(double r) ``** (*member function*)
	*	Sets *radius* of this complex number to  `` r ``.
	*	Returns reference to *itself*.
	*	If the radius is **0**, the function **throw** a `` const char * `` **exception** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	For example:

			complex a(3, 4);
			a.SetR(10);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 6.000000 + 8.000000i ``

- - -

*	**`` complex& complex::SetAngle(double x) ``** (*member function*)
	*	Sets *angle* of this complex number to  `` x ``.
	*	Returns reference to *itself*.
	*	If the radius is **0**, the function does **nothing**.
	*	For example:

			complex a(3, 4);
			a.SetAngle(M_PI / 2);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 0.000000 + 5.000000i ``

- - -

*	**`` complex add(complex val) const ``** (*member function*)
*	**`` complex operator+(const complex& val) const ``** (*member function*)
	*	Return sum of this number and `` val ``.
	*	For example:

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

			complex a(1, 2);
			complex c = a.e();
			printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` -1.131204 + 2.471727i ``

- - -

*	**`` complex ln() const ``** (*member function*)
	*	Return natural logarithm of this object.
	*	The inverse function of the natural exponential function **`` complex e() const ``**.
	*	For example:

			complex b(3, 6);
			complex c = b.ln();
			printf("%lf + %lfi\n", c.a(), c.b());
	*	Sample outputs `` 1.903331 + 1.107149i ``

- - -
- - -

#### 繁體中文 (Traditional Chinese)

# 複數物件 (C++)

- - -

## 簡介

這是我在大學時的某一項課堂作業(其實又是另一個裝飾品), 用*C++*寫成.

為了不被當掉只好跟某個無聊的周末借3個小時花在這上面


## 如何使用

將這**兩個**檔案**complex.c 與 complex.h** 複製到*原始碼目錄*下.

別忘了*引入*標頭檔案 `` #include "complex.h" ``

## 公用函數範例

*	**`` complex::complex(double __a, double __b) ``** (*建構子*)
*	**`` complex::complex() ``** (*建構子*)
	*	建構可以代表數學裡面複數的物件.
	*	範例:
		*	`` complex a(1, 2) ``, 代表 `` 1 + 2i ``
		*	`` complex a(3, 6) ``,代表 `` 3 + 6i ``
			*	其中`` i `` 是 *虛數單位*.
	*	當沒有參數的建構子 `` complex::complex() `` 被呼叫時,
		*	相當於呼叫以下程式碼 `` complex::complex(0, 0) ``

- - -

*	**`` double complex::a() const ``** (*成員函數*)
	*	回傳這個複數的*實部*.
	*	範例:

			printf("%lf\n", complex(3, 4).a());
	*	範例輸出 `` 3.000000 ``

- - -

*	**`` double complex::b() const ``** (*成員函數*)
	*	回傳這個複數的*虛部*.
	*	範例:

			printf("%lf\n", complex(3, 4).b());
	*	範例輸出 `` 4.000000 ``

- - -

*	**`` double complex::R() const ``** (*成員函數*)
	*	回傳這個複數的*半徑*.
	*	範例:

			printf("%lf\n", complex(3, 4).R());
	*	範例輸出 `` 5.000000 ``

- - -

*	**`` double complex::GetAngle() const ``** (*成員函數*)
	*	回傳這個複數與正x軸的*角度*.
	*	如果這個複數的半徑是 **0**, 這個函數將 **擲出** 一個型態為 `` const char * `` 的 **例外(exception)** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	範例:

			printf("%lf\n", complex(3, 4).GetAngle());
    *	範例輸出 `` 0.927295 ``

- - -

*	**`` complex complex::unit() const ``** (*成員函數*)
	*	回傳*單位複數*, 它的半徑正好是 `` 1 ``.
	*	如果這個複數的半徑是 **0**, 這個函數將 **擲出** 一個型態為 `` const char * `` 的 **例外(exception)** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	範例:

			complex a(3, 4);
			complex b = a.unit();
			printf("%lf + %lfi\n", b.a(), b.b());
	*	範例輸出 `` 0.600000 + 0.800000i ``

- - -

*	**`` complex complex::GetRotation(double x) ``** (*靜態函數*)
	*	回傳一個與x軸角度為 `` x `` 的 *單位複數* .
	*	範例:

			complex a = GetRotation(M_PI / 4);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	範例輸出 `` 0.707107 + 0.707107i ``

- - -

*	**`` complex& complex::SetA(double __a) ``** (*成員函數*)
	*	將數值 `` __a `` 指定給這個複數的 *實部*.
	*	回傳 *自己* 的參照.
	*	範例:

			complex a(1, 2);
			a.SetA(6);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	範例輸出 `` 6.000000 + 2.000000i ``

- - -

*	**`` complex& complex::SetB(double __b) ``** (*成員函數*)
	*	將數值 `` __b `` 指定給這個複數的 *虛部*.
	*	回傳 *自己* 的參照.
	*	範例:

			complex a(1, 2);
			a.SetB(11);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	範例輸出 `` 1.000000 + 11.000000i ``

- - -

*	**`` complex& complex::SetR(double r) ``** (*成員函數*)
	*	將這個複數的 *半徑* 設為  `` r ``.
	*	回傳 *自己* 的參照.
	*	如果這個複數的半徑是 **0**, 這個函數將 **擲出** 一個型態為 `` const char * `` 的 **例外(exception)** **`` complex::EXCEPTION_ZERO_RADIUS ``**.
	*	範例:

			complex a(3, 4);
			a.SetR(10);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	範例輸出 `` 6.000000 + 8.000000i ``

- - -

*	**`` complex& complex::SetAngle(double x) ``** (*成員函數*)
	*	將這個複數與x軸的 *角度* 設為  `` x ``.
	*	回傳 *自己* 的參照.
	*	如果這個複數的半徑是 **0**, 這個函數將 **不做任何事**.
	*	範例:

			complex a(3, 4);
			a.SetAngle(M_PI / 2);
			printf("%lf + %lfi\n", a.a(), a.b());
	*	Sample outputs `` 0.000000 + 5.000000i ``

- - -

*	**`` complex add(complex val) const ``** (*成員函數*)
*	**`` complex operator+(const complex& val) const ``** (*成員函數*)
	*	回傳這個複數與 `` val `` 的和.
	*	範例:

			complex a(1, 2);
			complex b(3, 6);
			complex c = a.add(b);
			// complex c = a + b // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` 4.000000 + 8.000000i ``

- - -

*	**`` complex minus(complex val) const ``** (*成員函數*)
*	**`` complex operator-(const complex& val) const ``** (*成員函數*)
	*	回傳這個複數與 `` val `` 的差.
	*	範例:

			complex a(1, 2);
			complex b(3, 6);
			complex c = a.minus(b);
			// complex c = a - b // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` -2.000000 + -4.000000i ``

- - -

*	**`` complex mul(complex val) const ``** (*成員函數*)
*	**`` complex operator*(const complex& val) const ``** (*成員函數*)
	*	回傳這個複數與 `` val `` 的積.
	*	範例:

			complex a(1, 2);
			complex b(3, 6);
			complex c = a.mul(b);
			// complex c = a * b // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` -9.000000 + 12.000000i ``

- - -

*	**`` complex mul(double val) const ``** (*成員函數*)
*	**`` complex operator*(double val) const ``** (*成員函數*)
	*	回傳這個複數與實數 `` val `` 的積.
	*	範例:

			complex a(1, 2);
			complex c = a.mul(5);
			// complex c = a * 5 // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` 5.000000 + 10.000000i ``

- - -

*	**`` complex div(complex val) const ``** (*成員函數*)
*	**`` complex operator/(const complex& val) const ``** (*成員函數*)
	*	回傳這個複數與 `` val `` 的商.
	*	範例:

			complex a(1, 2);
			complex b(3, 6);
			complex c = a.div(b);
			// complex c = a / b // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` -0.555556 + -0.000000i ``

- - -

*	**`` complex div(double val) const ``** (*成員函數*)
*	**`` complex operator/(double val) const ``** (*成員函數*)
	*	回傳這個複數與實數 `` val `` 的商.
	*	範例:

			complex b(3, 6);
			complex c = b.div(3);
			// complex c = b / 3 // 同樣效果
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` 1.000000 + 2.000000i ``

- - -

*	**`` complex e() const ``** (*成員函數*)
	*	回傳這個複數的自然指數.
	*	是自然對數 **`` complex ln() const ``** 的反函數.
	*	範例:

			complex a(1, 2);
			complex c = a.e();
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` -1.131204 + 2.471727i ``

- - -

*	**`` complex ln() const ``** (*成員函數*)
	*	回傳這個複數的自然對數.
	*	是自然指數 **`` complex e() const ``** 的反函數.
	*	範例:

			complex b(3, 6);
			complex c = b.ln();
			printf("%lf + %lfi\n", c.a(), c.b());
	*	範例輸出 `` 1.903331 + 1.107149i ``