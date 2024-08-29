#include <iostream>
#include <vector>

void print_vec(const std::vector<int> &vec){
    for (int i : vec){
        std::cout<< i << " ";
        
    }
    std::cout << "\n";
}

void bubble_sort(std::vector<int> &vec){
    for(int i = 0; i < vec.size(); ++i){
        for(int j = 0; j < vec.size()-1; ++j){
            if (vec[i] < vec[j])
                std::swap(vec[i], vec[j]);
        }
    }
}

int main(){

    std::vector<int> vec;
    int elem;
    std::cout << "input:";

    while(true){
    std::cin >> elem;

    if (elem == -1){
        if (vec.size() < 5){
            std::cout<< "Vector size is less than 5\n";
            std::cout << "input:";
        } else {
        bubble_sort(vec);
        vec.resize(5);
        print_vec(vec);


        std::cout<< vec[4] << "\n";
        
        std::cout << "input:";
        }
    }

    else if (elem == -2) break;
    else vec.push_back(elem);

    }

    return 0;
}