#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

    // Note that the size of the array is n-1
    int missingNumber(int n, vector<int>& arr) {

        // Sum of all elements in array :
        int sum = 0;
        
        for(int i=0; i<arr.size(); i++){
            sum += arr[i];
        }
        
        
        // Sum of n numbers :
        int ans = n*(n+1)/2;
        
        return ans-sum;
        
    }
};