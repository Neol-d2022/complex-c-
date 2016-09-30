class complex {
	private:
		double _a;
		double _b;
	
		static double _getR(const complex *c);
		static complex _getUnit(const complex *c);
		
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
		
		double R() const;
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
};
