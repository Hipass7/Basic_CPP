#include <iostream>
#include <fstream>

void print(std::ostream& os, int n){
    os << n << '\n';
}

//int main(){
//    print(std::cout, 35);
//
//    std::ofstream fout("temp.txt");
//    if (fout.good()){
//        print(fout, 36);
//        fout.close();
//    }
//}
