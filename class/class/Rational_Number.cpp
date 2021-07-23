#include <iostream>

using namespace std;

class Rational {
    int denominator;
    int numerator;
    static int gcd(int m, int n){
        if ( n == 0 )
            return m;
        else
            return gcd(n, m % n);
    }
    static int lcm(int m, int n){
        return m * n / gcd(m, n);
    }
public:
    Rational(int n, int d) : numerator(n), denominator(d){
        if ( d == 0 ){
            cout << "Can't" << endl;
            numerator = 0;
            denominator = 1;
        }
    }
    Rational() : numerator(0), denominator(1){}
    Rational(int n) : numerator(n), denominator(1){}
    int get_numerator() {
        return numerator;
    }
    int get_denominator() {
        return denominator;
    }
    Rational reduce() const{
        int factor = gcd(numerator, denominator);
        return {numerator / factor, denominator / factor};
    }
    bool operator== (const Rational& f) const {
        Rational f1 = reduce(), f2 = f.reduce();
        return (f1.numerator == f2.numerator && f1.denominator == f2.denominator);
    }
    bool operator != (const Rational& f) const {
        return !(*this == f);
    }
    Rational operator+ (const Rational& f) const {
        int CD = lcm(denominator, f.denominator);
        int nN = numerator * CD / denominator + f.numerator * CD / f.denominator;
        return {nN, CD};
    }
    Rational operator* (const Rational& f) const {
        int n = numerator * f.numerator;
        int d = denominator * f.denominator;
        Rational r(n, d);
        r = reduce();
        return {r.numerator, r.denominator};
    }
    friend std::ostream& operator << (std::ostream& os, const Rational& f);
    friend std::istream& operator >> (std::istream& os, Rational& f);
};
std::ostream& operator << (std::ostream& os, const Rational& f){
    os << f.numerator << " / " << f.denominator << endl;
    return os;
}
std::istream& operator >> (std::istream& os, Rational& f){
    os >> f.numerator >> f.denominator;
    return os;
}

//int main(){
//    Rational f1(2, 4), f2(18, 9), f3;
//    cout << f1 << f2 << (f1+f2);
//    cout << f1 << f3 << f1*f3;
//    cout << (f1 == f2);
//    cout << (f1 != f3);
//    cin >> f3;
//    cout << (f1 == f3);
//}
