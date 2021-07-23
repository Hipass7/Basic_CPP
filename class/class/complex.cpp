#include <iostream>
#include <complex>
#include <iomanip>
#include <random>

using namespace std;

//int main(){
//    complex<double> c1(2.0, 3.0), c2(2.0, -3.0);
//    double real1 = c1.real(), imag1 = c1.imag(), real2 = c2.real(), imag2 = c2.imag();
//    cout << c1 << " * " << c2 << " = " << real1*real2 - imag1*imag2 << " , " << imag1*real2 + real1*imag2 << endl;
//    cout << c1 << " * " << c2 << " = " << c1 * c2 << endl;
//    
//    random_device rdev;
//    mt19937 mt(rdev());
//    uniform_int_distribution<int> dist(0, 99);
//    int histogram[100] = {0};
//    for (int i = 0; i < 10000; i++){
//        int r = dist(mt);
//        histogram[r]++;
//    }
//    for (int i = 0; i < 100; i++)
//    cout << i << ": " << histogram[i] << endl;
//    
//    int sum = 0;
//    for (int elem : histogram){
//        sum += elem;
//    }
//    cout << sum;
//}
