#include <vector.h>
#include <iostream>
#include <counted.h>
using std::cout;
using std::string;

template <typename T>
void print(vector<T> &v) {
    cout << "size: " << v.size() << " " << v.capacity() << "\n";
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> c;
    c.push_back(4);
    c.push_back(8);
    c.push_back(15);
    c.push_back(16);
    c.push_back(23);
    c.push_back(42);
    c.erase(c.begin());
    print(c);
}
