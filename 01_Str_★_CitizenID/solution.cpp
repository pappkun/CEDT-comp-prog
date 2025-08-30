#include<iostream>
using namespace std;
int main(){

    string s;
    cin >> s;
    int n[12];
    int i;
    int x = 13;
    int sum = 0;
    for(i=0; i<12; i++){
        n[i] = (s[i]-'0')*x;
        x--; 
        sum = sum+n[i];
    }
    int n12 = (11-(sum%11))%10;

    for(i=0; i<12; i++){
        if(i==1 || i==5 || i==10){
            cout << "-";
        }
        cout << s[i];
    }
    cout << "-" << n12;

}