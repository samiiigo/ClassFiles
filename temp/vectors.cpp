#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    vector<int> v1 = {3, 4, 5};

    v.push_back(1);
    v.insert(v.begin(), 2);
    v.extend(v.begin(), v1.begin(), v1.end());
    
    return 0;
}
