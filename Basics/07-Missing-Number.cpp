#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 4, 5, 6};
    
    int n = 6;
    
    int sum = 0;

    for(int i=0; i<5; i++){
        sum += arr[i];
    }

    int expectedSum = n * (n + 1) / 2;

    int missingNumber = expectedSum - sum;

    cout << missingNumber; 
}