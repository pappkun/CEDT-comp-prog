#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> vec;
    int i,j;
    int roll_of_zero;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            int a;
            cin >> a;
            if(a != 0) vec.push_back(a);
            else roll_of_zero= n-i;
        }
    }

    int inversions = 0; 
    for(i=0;i<n*n-2;i++){
        for(j=i+1;j<n*n-1;j++){
            if(vec[i] > vec[j]){
                inversions++;
            }
        }
    }

    bool ans = false;
    if(n%2 != 0 && inversions%2 == 0){
        ans = true;
    }
    else if(n%2 == 0){
        if(inversions%2 != 0 && roll_of_zero%2 == 0){
            ans = true;
        }
        if(inversions%2 == 0 && roll_of_zero%2 != 0){
            ans = true;
        }
    }

    if(ans) cout << "YES";
    else cout << "NO";

}