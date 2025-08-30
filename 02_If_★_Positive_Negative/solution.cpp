#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;
    if(n>0){
        cout << "positive";
    }
    else if(n == 0){
        cout << "zero";
    }
    else{
        cout << "negative";
    }

    cout<<endl;
    
    if(n%2==0){
        cout << "even";
    }
    else{
        cout << "odd";
    }

}