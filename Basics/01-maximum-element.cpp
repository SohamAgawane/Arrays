#include<bits/stdc++.h>
using namespace std;

int main() {
int arr[5] = {5, 8, 3, 9, 4};

int ans = INT_MIN;

for(int i=0; i<5; i++){
if(arr[i] > ans){
ans = arr[i];
}
}
cout << ans;
}