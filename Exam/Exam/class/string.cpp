#include <string>
#include <iostream>

using namespace std;

int main(){
    string name = "joe";
    cout << name << endl;
    name = "jane";
    cout << name << endl;

    string name1 = "joe", name2;
    name2 = name1;
    cout << name1 << ' '<< name2;
}

