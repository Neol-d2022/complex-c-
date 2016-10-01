#include <cmath>

class complex {
	private:
		double _a;
		double _b;
	
		static double _getR(const complex *c);
		static double _getAngle(const complex *c);
		static complex _getUnit(const complex *c);
		
		static void _setR(complex *c, double r);
		static void _setAngle(complex *c, double x);
		
		static complex _add(const complex *c, const complex *d);
		static complex _minus(const complex *c, const complex *d);
		static complex _mul(const complex *c, const complex *d);
		static complex _mul(const complex *c, double d);
		static complex _div(const complex *c, const complex *d);
		static complex _div(const complex *c, double d);
		static complex _exponential(const complex *c);
		static complex _log_e(const complex *c);
		
	public:
		complex(double __a, double __b);
		complex();
		
		static const char *EXCEPTION_ZERO_RADIUS;
		
		double R() const;
		double GetAngle() const;
		complex unit() const;
		
		complex add(complex val) const;
		complex minus(complex val) const;
		complex mul(complex val) const;
		complex mul(double val) const;
		complex div(complex val) const;
		complex div(double val) const;
		complex e() const;
		complex ln() const;
		
		complex& operator=(const complex& val);
		
		complex operator+(const complex& val) const;
		complex operator-(const complex& val) const;
		complex operator*(const complex& val) const;
		complex operator*(double val) const;
		complex operator/(const complex& val) const;
		complex operator/(double val) const;
		
		complex& operator+=(const complex& val);
		complex& operator-=(const complex& val);
		complex& operator*=(const complex& val);
		complex& operator*=(double val);
		complex& operator/=(const complex& val);
		complex& operator/=(double val);
		
		double a() const;
		double b() const;
		
		static complex GetRotation(double x);
		
		complex& SetA(double __a);
		complex& SetB(double __b);
		
		complex& SetR(double r);
		complex& SetAngle(double x);
};

double complex::_getR(const complex *c) {
	return sqrt(c->_a * c->_a + c->_b * c->_b);
}

double complex::_getAngle(const complex *c) {
	return acos(_getUnit(c)._a);
}

complex complex::_getUnit(const complex *c) {
	double r = _getR(c);
	if(r == 0) throw EXCEPTION_ZERO_RADIUS;
	return complex(c->_a / r, c->_b / r);
}

void complex::_setR(complex *c, double r) {
	complex _c;
	double _r = _getR(c);
	if(_r == 0) throw EXCEPTION_ZERO_RADIUS;
	_c = _mul(c, r / _r);
	*c = _c;
}

void complex::_setAngle(complex *c, double x) {
	complex _c, _r;
	double _x, r;
	r = _getR(c);
	if(r == 0) return;
	_x = _getAngle(c);
	_r = GetRotation(x - _x);
	_c = _mul(c, &_r);
	*c = _c;
}

complex complex::_add(const complex *c, const complex *d) {
	return complex(c->_a + d->_a, c->_b + d->_b);
}

complex complex::_minus(const complex *c, const complex *d) {
	return complex(c->_a - d->_a, c->_b - d->_b);
}

complex complex::_mul(const complex *c, const complex *d) {
	return complex(c->_a * d->_a - c->_b * d->_b, c->_b * d->_a + c->_a * d->_b);
}

complex complex::_mul(const complex *c, double d) {
	return complex(c->_a * d, c->_b * d);
}

complex complex::_div(const complex *c, const complex *d) {
	double _d = d->_a * d->_a - d->_b * d->_b;
	return complex((c->_a * d->_a + c->_b * d->_b) / _d, (c->_b * d->_a - c->_a * d->_b) / _d);
}

complex complex::_div(const complex *c, double d) {
	return complex(c->_a / d, c->_b / d);
}

complex complex::_exponential(const complex *c) {
	double e = exp(c->_a);
	return complex(cos(c->_b) * e, sin(c->_b) * e);
}

complex complex::_log_e(const complex *c) {
	return complex(log(c->_a * c->_a + c->_b * c->_b) * 0.5, acos(c->_a / sqrt(c->_a * c->_a + c->_b * c->_b)));
}

complex::complex(double __a, double __b) {
	_a = __a;
	_b = __b;
}

complex::complex() {
	_a = _b = 0;
}

const char* complex::EXCEPTION_ZERO_RADIUS = "EXCEPTION_ZERO_RADIUS";

double complex::R() const {
	return _getR(this);
}

double complex::GetAngle() const {
	return _getAngle(this);
}

complex complex::unit() const {
	return _getUnit(this);
}

complex complex::add(complex val) const {
	return _add(this, &val);
}

complex complex::minus(complex val) const {
	return _minus(this, &val);
}

complex complex::mul(complex val) const {
	return _mul(this, &val);
}

complex complex::mul(double val) const {
	return _mul(this, val);
}

complex complex::div(complex val) const {
	return _div(this, &val);
}

complex complex::div(double val) const {
	return _div(this, val);
}

complex complex::e() const {
	return _exponential(this);
}

complex complex::ln() const {
	return _log_e(this);
}

complex& complex::operator=(const complex& val) {
	_a = val._a;
	_b = val._b;
	return *this;
}

complex complex::operator+(const complex& val) const {
	return _add(this, &val);
}

complex complex::operator-(const complex& val) const {
	return _minus(this, &val);
}

complex complex::operator*(const complex& val) const {
	return _mul(this, &val);
}

complex complex::operator*(double val) const {
	return _mul(this, val);
}

complex complex::operator/(const complex& val) const {
	return _div(this, &val);
}

complex complex::operator/(double val) const {
	return _div(this, val);
}

complex& complex::operator+=(const complex& val) {
	complex c = _add(this, &val);
	return (*this = c);
}

complex& complex::operator-=(const complex& val) {
	complex c = _minus(this, &val);
	return (*this = c);
}

complex& complex::operator*=(const complex& val) {
	complex c = _mul(this, &val);
	return (*this = c);
}

complex& complex::operator*=(double val) {
	complex c = _mul(this, val);
	return (*this = c);
}

complex& complex::operator/=(const complex& val) {
	complex c = _div(this, &val);
	return (*this = c);
}

complex& complex::operator/=(double val) {
	complex c = _div(this, val);
	return (*this = c);
}

double complex::a() const {
	return _a;
}

double complex::b() const {
	return _b;
}

complex complex::GetRotation(double x) {
	return complex(cos(x), sin(x));
}

complex& complex::SetA(double __a) {
	_a = __a;
	return *this;
}

complex& complex::SetB(double __b) {
	_b = __b;
	return *this;
}

complex& complex::SetR(double r) {
	_setR(this, r);
	return *this;
}

complex& complex::SetAngle(double x) {
	_setAngle(this, x);
	return *this;
}
