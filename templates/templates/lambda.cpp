#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

function<double(double)> derivative0 // 람다함수의 응용 (이건 그냥 갖다 쓰는거)
 (function<double(double)> f, double h){
     return [f, h](double x) {return (f(x+h) - f(x)) / h; };
 }

double fun(double x){
    return 3 * x * x + 5;
}

//int main(){
//    cout << [](int x, int y) -> int {return x + y; }(3, 2) << endl;
//
//    auto F1 = [] (auto a, auto b, auto c)
//    {return a + b + c; };
//    cout << F1(10, 20, 30) << endl;
//
//    vector<int> v = { 1, 2, 3, 4, 5 };
//    for_each(v.begin(), v.end(), [](int elem) { cout << elem << endl;});
//
//    auto F2 = [](int x, int y) -> int { return x + y; };
//    cout << F2(3,6);
//
//    int x = 1, y = 2;
//    auto print0 = [=] { cout << x << " , " << y << endl; };
//    auto print1 = [=] () mutable {cout << ++x << " , " << ++y << endl;};
//    auto print2 = [&] { cout << x++ << " , " << y++ << endl;};
//    auto print3 = [=, &y] { cout << x << " , " << y++ << endl;};
//
//    print0();
//    x = 1; y = 2;
//    print1();
//    x = 1; y = 2;
//    print2();
//    x = 1; y = 2;
//    print3();
//    x = 1; y = 2;
//
//    double h = 0.00001;
//    auto der0 = derivative0(fun, h);
//    cout << der0(5.) << endl;
//
//    auto der1 = [h](double x) {
//        return (fun(x+h) - fun(x)) / h;
//    };
//    cout << der1(5.) << endl;
//}
