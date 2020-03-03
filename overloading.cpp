#include <cstdio>
#include <iostream>

//Adapted from LinkedIn Learning

using namespace std;

class Rational {
    int _n = 0;
    int _d = 1;

    public:
        Rational (int numer = 0, int denom = 1) : _n(numer), _d(denom) {};
        Rational (const Rational & rhs) : _n(rhs._n), _d(rhs._d) {};
        ~Rational ();
        int numerator() const { return _n; };
        int denominator() const { return _d; };
        Rational & operator = (const Rational &);
        // Rational operator + (const Rational &) const;
        Rational operator - (const Rational &) const;
        Rational operator * (const Rational &) const;
        Rational operator / (const Rational &) const;
};

Rational & Rational::operator = (const Rational &rhs) {
    if (this != &rhs) {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this;
}

/*
Rational Rational::operator + (const Rational &rhs) const {
    return Rational((_n * rhs._d) + (_d * rhs._n), _d * rhs._d);
}
*/

Rational Rational::operator - (const Rational &rhs) const {
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * (const Rational &rhs) const {
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / (const Rational &rhs) const {
    return Rational(_n * rhs._d, _d * rhs._n);
}

Rational::~Rational(){
    _n = 0; _d = 1;
}

//for std::cout
std::ostream& operator << (std::ostream& o, const Rational &r){
    if(r.denominator() == 1) return o << r.numerator();
    else return o << r.numerator() << '/' << r.denominator();
}

// non-member overload
Rational operator + (const Rational & lhs, const Rational & rhs){
    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
} 

int main(){
    Rational a = 7;
    cout << "a is: " << a << endl;
    Rational b(5, 3);   
    cout << "b is: " << b << endl;
    Rational c = b;     //copy constructor
    cout << "c is: " << c << endl;
    Rational d;         //default constructor
    cout << "d is: " << d << endl;
    d = c;              //assignment operator
    cout << "d is: " << d << endl;
    Rational & e = d;   //reference
    d = e;              //assignment to self
    cout << "e is: " << e << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    cout << 14 << " + " << b << " = " << 14 + b << endl; //non-member overload

    return 0;
}