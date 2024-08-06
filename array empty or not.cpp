#include <iostream>
#include <vector>
using namespace std;

bool isEmpty(const vector<int> arr) {
    return arr.empty();
}

int main() {
    vector<int> emptyVec;
    vector<int> nonEmptyVec = {1, 2, 3};
    
    cout << boolalpha; 
    cout << isEmpty(emptyVec) << endl;        
    cout << isEmpty(nonEmptyVec) << endl;     

    return 0;
}

