#include <iostream>
#include <vector>

void maxSubarraySum(const std::vector<int>& a, int& startIndex, int& endIndex) {
    int maxSum = a[0];
    int currentSum = a[0];
    int tempStartIndex = 0;

    for (int i = 1; i < a.size(); ++i) {
        if (currentSum < 0) {
            currentSum = a[i];
            tempStartIndex = i;
        } else {
            currentSum += a[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            startIndex = tempStartIndex;
            endIndex = i;
        }
    }
    startIndex = startIndex;
    endIndex = endIndex;
}

int main() {
    int startIndex = 0;
    int endIndex = 0;
    std::vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    maxSubarraySum(a, startIndex, endIndex);
    std::cout << startIndex << " " << endIndex;
}