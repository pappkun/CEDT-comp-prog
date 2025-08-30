#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    int i,j;
    int n;
    cin >> n;
    
    vector<int> h(n);
    for(i=0;i<n;i++){
        cin >> h[i];
    }

    vector<int> left(n); 
    vector<int> right(n);

    left[0] = h[0];
    right[n-1] = h[n-1];
    
    for(i=1; i<n; i++){
        left[i] = max(left[i-1], h[i]);
    }
    for(i=n-2; i>=0; i--){
        right[i] = max(right[i+1], h[i]);
    }

    int water = 0;
    for(i=0;i<n;i++){
        water = water + min(left[i], right[i]) - h[i];
    }

    cout << water;

}