#include<iostream>
using namespace std;

int main(){
    
    int i;
    int n;
    cin >> n;

    bool f = false;
    while(n%2 == 0){
        if(f) cout << "*";
        cout << 2;
        n = n/2;
        f = true;
    }

    i = 1;
    while(1){
        i = i+2;
        if(i>n){
            break;
        }
        while(n%i == 0){
            if(f) cout << "*";
            cout << i;
            f = true;{
            n = n/i;
            }
        }
    }

}