#include <bits/stdc++.h>
using namespace std;

void fun(int a[], int n){
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
}

int main() {
    int arr[5] = {1, 8, 4, 6, 5};

    fun(arr, 5);
}