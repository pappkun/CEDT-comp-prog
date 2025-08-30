#include<bits/stdc++.h>
using namespace std;
int main(){

    double sub;
    double n;
    cin >> sub;
    if(sub >= 1000000000){
        n = sub/1000000000;
        if(n>=10){
            n = round(n);
        }
        else{
            n = round(n*10)/10.0;
        }
        cout << n << "B";
    }
    else if(sub >=1000000){
        n = sub/1000000;
        if(n>=10){
            n = round(n);
        }
        else{
            n = round(n*10)/10.0;
        }
        cout << n << "M";
    }
    else if(sub>=1000){
        n = sub/1000;
        if(n>=10){
            n = round(n);
        }
        else{
            n = round(n*10)/10.0;
        }
        cout << n << "K";
    }
    else{
        cout << sub;
    }

}