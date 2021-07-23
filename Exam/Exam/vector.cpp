#include <iostream>
#include <vector>

using namespace std;

void printt(const vector<int>& v){
    for (int elem : v)
        cout << elem << ' ';
    cout << endl;
}

void square(vector<int>& v){
    for (int& elem : v)
        elem *= elem;
}

int sum (vector<int>& v){
    int result = 0;
    for (int elem : v)
        result += elem;
    return result;
}

void make_random(vector<int>& v, int size){
    v.clear();
    int n = rand() % size + 1;
    for (int i = 0; i < n; i++)
    v.push_back(rand()%size + 1);
}

//int main(){
//    vector<int> list{2, 4, 6, 8};
//    print(list);
//    cout << sum(list) << endl;
//    square(list);
//    print(list);
//    cout << sum(list) << endl;
//    make_random(list, 8);
//    print(list);
//}
