#include <iostream>
#include <queue>
#include <vector>

struct Cmp {
    bool operator() (int i1, int i2){
        return i2 < i1;
    }
};

//int main(){
//    std::priority_queue<int, std::vector<int>, Cmp> queue;
//    queue.push(16);
//    queue.push(3);
//    queue.push(5);
//    queue.push(32);
//    queue.push(52);
//    queue.push(22);
//    while (!queue.empty()){
//        std::cout << queue.top() << ' ';
//        queue.pop();
//    }
//    std::cout << '\n';
//}
