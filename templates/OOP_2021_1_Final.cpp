/*             Object-Oriented Programming, Final exam (2021-1)                       */
//  Department(학과):                   Student ID(학번):              Name(이름):                    
//
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

class Fraction {
protected:
    int x;
    int y;
public:
    Fraction(int x, int y) : x(x), y(y) {}
    Fraction(int x) : x(x), y(1) {}
    Fraction() : x(0), y(1) {}
    virtual void print() const {
        cout << x << '/' << y;
    }
    static int gcd(int m, int n){
        if (n == 0)
            return m;
        else
            return gcd(n, m % n);
    }
    Fraction operator* (const Fraction &f){
        int new_x = x * f.x;
        int new_y = y * f.y;
        int a = gcd(new_x,new_y);
        return { new_x / a, new_y / a};
    }
    bool operator== (const Fraction &f){
        int a = gcd(f.x,f.y);
        int b = gcd(x,y);
        return (x / b == f.x / a) && (y / b == f.y / a);
    }
    Fraction operator-(){
        return { -x , y };
    }
    
};
class FractionPlus : public Fraction {
protected:
    int p;
public:
    FractionPlus(int p, int x, int y) : p(p), Fraction(x,y) {}
    void print(){
        if (x >= 0 && y > 0){
            cout << p << " + ";
            Fraction::print();
        }
        else {
            cout << p << "  ";
            Fraction::print();
        }
    }
    FractionPlus operator* (const FractionPlus &f){
        int new_x1 = p * y + x;
        int new_x2 = f.p * f.y + f.x;
        new_x1 *= new_x2;
        int new_y = y * f.y;
        int a = gcd(new_x1,new_y);
        new_x1 /= a;
        new_y /= a;
        int pp = new_x1 / new_y;
        new_x1 %= new_y;
        return { pp, new_x1, new_y };
    }
};
class Complex : public Fraction {
    Fraction f1;
    Fraction f2;
public:
    Complex(Fraction f1, Fraction f2) : f1(f1), f2(f2) {}
    
    void print() const {
        f1.print();

        cout << " + ";
        f2.print();
        cout << "i";
    }
};

int main(){
    Fraction f1(2, 3);
    Fraction f2(3, 5);
    Fraction f3(5);

    f1.print();   // prints 2/3
    std::cout << std::endl;
    f2.print();   // prints 3/5
    std::cout << std::endl;
    f3.print();   // prints 5/1
    std::cout << std::endl;

    Fraction f4 = f2 * f3;
    f4.print();   // prints 3/1
    std::cout << std::endl;
    std::cout << (f3 == Fraction(10, 2)) << std::endl; // 1

    FractionPlus f5(1, 3, 5);
    FractionPlus f6(0, 2, 3);
    f5.print(); // prints 1 + 3/5
    std::cout << std::endl;

    FractionPlus f7 = f5 * f6;

    Fraction& r1 = f7;
    r1.print(); // prints 1 + 1/15
    std::cout << std::endl;

    const Complex c1(f1, -f2);
    Complex c2(f3, f4);
    c1.print(); // prints 2/3 - 3/5i
    std::cout << std::endl;
    c2.print(); // prints 5/1 + 3/1i
    std::cout << std::endl;
}
