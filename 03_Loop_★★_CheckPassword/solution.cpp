#include<iostream>
#include<string>
using namespace std;

int main(){

    int i,j;

    string s;
    while(cin >> s){
        bool l12 = false;
        bool l8 = false;
        bool A = false;
        bool a = false;
        bool num = false;
        bool x = false;
        int n = s.length();
        if(n>=12){
            l12 = true;
            l8 = true;
        }
        else if(n>=8){
            l8 = true;
        }
        for(i=0;i<n;i++){
            if(s[i]>='A' && s[i]<='Z'){
                A = true;
            }
            if(s[i]>='a' && s[i]<='z'){
                a = true;
            }
            if(s[i]>='0' && s[i]<='9'){
                num = true;
            }
            if( !(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z') && !(s[i]>='0' && s[i]<='9') ){
                x = true;
            }
        }
        cout << ">> ";
            if(A && a && num ){
                if(l12 && x){
                    cout << "strong";
                }
                else if(l8){
                    cout << "weak";
                }
                else{
                    cout << "invalid";
                }
            }
            else{
                cout << "invalid";
            }
            cout << endl;
    }

}