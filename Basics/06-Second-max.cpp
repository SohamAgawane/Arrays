#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {5, 2, 11, 8, 6};

    int ans = INT_MIN;
    for(int i=0; i<=5; i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout << "Largest element = " << ans << endl;

    int secondLargest = -1;
    for(int i=0; i<5; i++){
        if(arr[i] != ans){
            secondLargest = max(arr[i], secondLargest);
        }
    }
    cout << "Second Largest = " << secondLargest;

}