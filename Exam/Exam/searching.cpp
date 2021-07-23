#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int locate(const vector<int>& v, int seek){
    int n = v.size();
    for (int i = 0; i < n; i++)
        if (v[i] == seek)
            return i;
    return -1;
}

void print(const vector<int>& v){
    for (int elem : v)
        cout << elem << ' ';
    cout << endl;
}

void selection_sortt(vector<int>& a){
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

int binary_search(const vector<int>& v, int seek){
    int first = 0, last = v.size() - 1, mid;
    
    while (first <= last){
        mid = first + (last - first + 1) / 2;
        if (v[mid] == seek)
            return mid;
        else if (v[mid] > seek)
            last = mid - 1;
        else
            first = mid + 1;
    }
    return -1;
}

//int main(){
//    vector<int> list{ 100, 44, 2, 80, 5, 13, 11, 2, 110 };
//    cout << locate(list, 44);
//    selection_sortt(list);
//    cout << binary_search(list, 110);
//}
