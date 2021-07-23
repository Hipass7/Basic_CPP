#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void selection_sort(vector<int>& a){
    unsigned long n = a.size();
    for (int i = 0; i < n - 1; i++){
        int small = i;
        for (int j = i + 1; j < n; j++){
            if (a[j] < a[small])
                small = j;
        }
        if (i != small)
            swap(a[i], a[small]);
    }
}

bool less_than(int a, int b){
    return a < b;
}

bool greater_than(int a, int b){
    return a > b;
}

void flexible_sort(vector<int>& a, bool (*compare)(int, int)){
    int n = a.size();
    for (int i = 0; i < n - 1; i++){
        int small = i;
        for (int j = i + 1; j < n; j++){
            if (compare(a[j], a[small]))
                small = j;
            
        }
        if (i != small)
            swap(a[i], a[small]);
    }
}

void printtt(const vector<int>& v){
    for (int elem : v)
        cout << elem << ' ';
    cout << endl;
}

//int main(){
//    vector<int> list{23, -3, 4, 215, 0 , -3, 2, 23, 100, 88, -10};
//    print(list);
//    
//    selection_sort(list);
//    print(list);
//    
//    flexible_sort(list, greater_than);
//    print(list);
//    
//    flexible_sort(list, less_than);
//    print(list);
//}
