#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void sortModule(std::vector<int> &vec){
    sort(vec.begin(), vec.end(), [](int a, int b) {
        if (std::abs(a) == std::abs(b)) {
            return a < b;
        }
        return std::abs(a) < std::abs(b);
    });

    for (int num : vec) {
        std::cout << num << " ";

    }
}


int main(){ 
    std::vector<int> vec = {-100,-50, -5, 1, 10, 15};
    sortModule(vec);
    return 0;
}