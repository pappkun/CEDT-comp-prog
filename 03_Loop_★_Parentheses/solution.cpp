#include<iostream>
#include<string>
using namespace std;

int main(){

    string x = "()[]";
    string y = "[]()";
    
    string str;
    getline(cin, str);
    int n = str.length();

    for(int i;i<n;i++){
        for(int j=0;j<4;j++){
            if(str[i] == x[j]){
                str[i] = y[j];
                break;
            }
        }
    }
    
    cout << str;

}