#include <iostream>
#include <vector>

void print_reverse(const std::vector<int>& v){
    auto p = std::end(v);
    while (p!= std::begin(v)){
        p--;
        std::cout << *p << ' ';
    }
    std::cout << '\n';
}

//int main(){
//    std::vector<int> vecc {10, 20, 30, 40, 50};
//    
//    for (auto iter = std::begin(vecc); iter != std::end(vecc); iter++)
//        std::cout << *iter << ' ';
//    
//    std::cout << '\n';
//    
//    std::vector<int> vec(20);
//    for (int i = 0; i < 20; i++)
//        vec[i] = i;
//    
//    print_reverse(vec);
//    
//    std::vector<int> v{ 10, 20, 30, 40, 50 };
//    
//    for (int i = 1; i <= 5; ++i){
//        for (auto iter = std::begin(v); iter != std::begin(v) + i; iter++)
//            std::cout << *iter << ' ';
//        std::cout << '\n';
//    }
//}
