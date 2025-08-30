#include<bits/stdc++.h>
using namespace std;
int main(){

    int y;
    cin>>y;
    y = (y-543)%100;
    int a = floor(y/4);
    y = y+a+11;
    y = y%7;
    cout<<y;


}