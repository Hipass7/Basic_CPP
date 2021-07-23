#include <iostream>

using namespace std;

class Base{
    int num1;
public:
    Base(int n) : num1(n) {}
    virtual void print() const{
        cout << num1 << " base \n";
    }
    int Num1() const {
        return num1 ;
    }
    
};
class Derived : public Base{
    int num2;
public:
    Derived(int n1, int n2) : Base(n1), num2(n2) {}
    void print() const{
        cout << Num1() << num2 << " derived \n";
    }
};

//int main(){
//    Base b(2);
//    Derived d(3, 5);
//    b.print();
//    d.print();
//    d.Base::print();
//    b = d;
//    b.print();
//    Base &bb = d;
//    bb.print();
//    
//    Base& br = b;
//    Base& dr = d;
//    br.print();
//    dr.print();
//    
//    Base* bp = &b;
//    Base* dp = &d;
//    bp->print();
//    dp->print();
//    
//    br.Base::print();
//    dr.Base::print();
//}
