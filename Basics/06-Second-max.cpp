#include<bits/stdc++.h>
using namespace std;

int print2largest(vector<int> &arr) {

    //Largest element :
    int largest = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    
    // Second Largest :
    int second = -1;
    
    for(int i=0; i<arr.size(); i++){
        if(arr[i] != largest){
            second = max(second, arr[i]);
        }
    }
    
    //  No second largest exist
    if(second == INT_MIN){
        return -1;
    }
    
    return second;
}