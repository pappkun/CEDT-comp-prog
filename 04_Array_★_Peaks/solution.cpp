#include<iostream>
using namespace std;

int main(){

    int i,n;
    cin >> n;
    float a[n];
    int count = 0;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=1;i<n-1;i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]) count++;
    }
    
    cout << count;

}