#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    cout << "After push_back operations: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    
    cout << endl;
    
    cout << "Size of vector: " << vec.size() << endl;
    
    cout << "Front element: " << vec.front() << endl;
    
    cout << "Back element: " << vec.back() << endl;
    
    cout << "Element at index 1: " << vec.at(1) << endl;
    
    vec.pop_back();
    cout << "After pop_back operation: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
    
    cout << "Final size of vector: " << vec.size() << endl;

    return 0;
}
