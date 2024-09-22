#include <iostream>
#include <vector>


int main(){
    std::vector<int> a;
    int res;

    std::cout << "Enter 4 numbers: ";

    for (int i = 0; i < 4; ++i){
        int num;
        std::cin >> num;
        a.push_back(num);
    }

    std::cout << "Enter the result: ";
    std::cin >> res;
    for (int i = 0; i < a.size(); i++){
        for (int j = i + 1; j < a.size(); j++){
            if (a[i] + a[j] == res){
                std::cout << a[i] << " " << a[j] << "\n";
                break;
            }
        }
    }
}
