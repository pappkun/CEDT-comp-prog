#include<iostream>
using namespace std;

int main(){

    int h;
    cin >> h;

    int i,j;
    for(i=0;i<h-1;i++){
        cout << ".";
    }
    cout << "*" << endl;
    int x=1;
    for(i=1;i<h-1;i++){
        for(j=0;j<(h-i)-1;j++){
            cout << ".";
        }
        cout << "*";
        for(j=0;j<x;j++){
            cout << ".";
        }
        cout << "*" << endl;
        x = x+2;
    }
    for(i=0;i<(2*h)-1;i++){
        cout << "*";
    }

}