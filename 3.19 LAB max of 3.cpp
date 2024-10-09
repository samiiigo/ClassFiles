#include <iostream>
using namespace std;

int main() {
    int val1;
    int val2;
    int val3;
    int max;

    cin >> val1>>val2>>val3;

    //v1
    if (val1>val2){
        if (val1>val3){
            max = val1;
        }else{
            max = val3;
        }
    }else if(val2>val3){
        max = val2;
    }else{
        max = val3;
    }
    cout<< "Max of [" << val1  << "," << val2 << "," << val3 << "] is " << max << endl;

    //v2
    if (val1 > val2 && val1 > val3){
        max = val1;
    } else if (val1 < val2 && val2 > val3){
        max = val2;
    } else {
        max = val3;
    }

    cout<< "Max of [" << val1  << "," << val2 << "," << val3 << "] is " << max << endl;

    return 0;
}