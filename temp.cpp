#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums(5,10);
    nums.reserve(10);

    for (auto& num : nums) {
        cout << num << " ";
    }

    cout << endl;
    
    nums.resize(8,20);

    for (auto& num : nums) {
        cout << num << " ";
    }
    return 0;
}