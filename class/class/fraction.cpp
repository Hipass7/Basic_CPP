#include <iostream>
#include <cstdlib>

using namespace std;

class SimpleRational{
    int numerator;
    int denominator;
public:
    SimpleRational(int n, int d) : numerator(n), denominator(d){
        if (d == 0){
            cout << "Zero denominator error \n";
            exit(1);
        }
    }
    SimpleRational() : numerator(0), denominator(1){}
    void set_numerator(int n){
        numerator = n;
    }
    void set_denominator(int d){
        if (d != 0) denominator = d;
        else{
            cout << "Nope!" << endl;
            exit(1);
        }
    }
    int get_numerator() const {
        return numerator;
    }
    int get_denominator() const {
        return denominator;
    }
    friend std::ostream& operator << (std::ostream& os, const SimpleRational& f);
};
std::ostream& operator << (std::ostream& os, const SimpleRational& f){
    os << f.numerator << " / " << f.denominator << endl; // friend를 해주어서 private접근 가능
    return os;
}
SimpleRational multiply(SimpleRational f1, SimpleRational f2){
    return {f1.get_numerator() * f2.get_numerator(), f1.get_denominator() * f2.get_denominator()};
}
void print_fraction(const SimpleRational& f){
    cout << f.get_numerator() << "/" << f.get_denominator() << endl;
}
SimpleRational zero1(const SimpleRational& f){
    SimpleRational result{f}; // 복사 생성자
    result.set_numerator(0);
    return result;
} // 메모리를 새로 만들어서 바꾸는 거
SimpleRational zero2(SimpleRational f){
    f.set_numerator(0);
    return f;
} // 기존의 것을 바꾸는 것
//int main(){
//    SimpleRational fract(1, 2);
//    print_fraction(fract);
//    fract.set_numerator(19);
//    fract.set_denominator(4);
//    print_fraction(fract);
//    
//    SimpleRational fract1{1, 2}, fract2{2, 3};
//    SimpleRational ex = multiply(fract1,fract2);
//    print_fraction(ex);
//    
//    auto ex1 = zero1(ex);
//    print_fraction(ex1);
//    cout << ex1;
//}
