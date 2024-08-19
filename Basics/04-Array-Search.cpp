#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {3, 8, 5, 9, 2, 7};

    int n;
    cin >> n;

    for(int i=0; i<=6; i++){
        if(arr[i] == n){
            cout << "Present";
            return 0;
        }
    }
    cout << "Not present";
}