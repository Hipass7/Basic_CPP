#include <iostream>
#include <array>
#include <iomanip>
#include <vector>

using namespace std;

const int ROWS = 3, COLUMNS = 5;
using Matrix = double[ROWS][COLUMNS];
void print_matrix(const Matrix m){
    for (int row = 0; row < ROWS; row++){
        for (int col = 0; col < COLUMNS; col++){
            cout << setw(5) << m[row][col];
        }
        cout << endl;
    }
}

//int main(){
////    double *numbers;
////    int size;
////    cin >> size;
////    if (size > 0){
////        numbers = new double[size];
////        for (int i = 0; i < size; i++){
////            cin >> numbers[i];
////        }
////        for (int i = 0; i < size; i++){
////            cout << numbers[i] << endl;
////        }
////        delete []numbers;
////    }
//    
//    double mat[ROWS][COLUMNS] = {{1, 2, 3, 4, 5}, {11, 12, 13, 14, 15}, {21, 22, 23, 24, 25}};
//    print_matrix(mat);
//    
//    char *word = "kanghee!";
//    cout << word << endl;
//    
//    char wordd[256];
//    cin >> wordd;
//    
//    cout << wordd;
//    
//    vector<int> v(10);
//    cout << v[0] << endl;
//    
//    array<int, 10> a;
//    cout << a[0] << endl;
//    
//    int arr[10];
//    cout << arr[0] << endl;
//    
//    int x = int();
//    cout << x << endl;
//}
