#include <iostream>
#include <string>

using namespace std;

template <class T>
bool equal(T a, T b) {
    return a == b;
}
template <class T1, class T2> // 혼합해서 쓸 수 있도록
double average(T1 a, T2 b){
    return (a + b) / 2.;
}

template <class T>
T *new_var(int size){
    return new T[size];
}

template <typename TT>
TT sum(const vector<TT>& v){
    TT result = 0;
    for (TT elem : v)
        result += elem;
    return result;
}

template <typename ElemType>
void swap(ElemType& a, ElemType& b){
    ElemType temp = a;
    a = b;
    b = temp;
}

//int main() {
//    cout << equal (3, 3) << endl;
//    cout << equal (2.2, 2.7) << endl;
//    cout << equal ("abc", "abcd") << endl;
//    int *p1 = new_var<int>(10);
//    double *p2 = new_var<double>(10); // 중요!
//    
//}
