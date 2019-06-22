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
    c.resize(5, 5);
    c.assign(c.begin(), c.end());
}
