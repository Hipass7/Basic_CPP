#include <iostream>
#include <array>

using namespace std;

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    cout << a[i] << ' ';
    cout << endl;
}

int sum(int a[], int n){
    int s = 0;
    for (int i = 0; i < n; i++)
    s+= a[i];
    return s;
}

void square(int *a, int n){
    for (int i = 0; i < n; i++){
        *(a+i) *= *(a+i);
    }
}

void iterative_print(const int *a, int n){
    for (int i = 0; i < n; i++)
    cout << a[i] << ' ';
}

void recursive_print(const int *a, int n){
    if (n > 0){
        cout << *a << ' ';
        recursive_print(a + 1, n - 1);
    }
}

void point_print(int *begin, int *end){
    for (int *elem = begin; elem != end; elem++)
    cout << *elem << ' ';
    cout << endl;
}

//int main(){
//    int list[] = { 2, 4, 6, 8};
//    print(list, 4);
//    cout << sum(list, 4) << endl;
//    square(list, 4);
//    print(list, 4);
//    
//    int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 }, *p;
//    p = &a[0]; // 포인터가 첫번째 배열의 요소의 주소를 가리키는데 +1 하면 다음 요소의 주소를 가리킴
//    for (int i = 0; i < 10; i++){
//        cout << *p << ' ';
//        p++;
//    }
//    
//    int arr[] = { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
//    iterative_print(arr, 11);
//    recursive_print(arr, 11);
//    
//    int *begin, *end;
//    begin = arr;
//    end = arr + 11;
//    point_print(begin, end);
//}
