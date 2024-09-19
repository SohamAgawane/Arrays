#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> vec;

    cout << "Size = " << vec.size() << endl;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << "Size after push_back = " << vec.size() << endl;

    vec.pop_back();
    cout << "Size after pop_back = " << vec.size() << endl;

    cout << vec.front() << endl;

    cout << vec.back() << endl;

    cout << vec.at(0) << endl;
    cout << vec.at(1);
}