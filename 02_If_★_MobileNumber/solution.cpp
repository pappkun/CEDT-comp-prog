#include<bits/stdc++.h>
using namespace std;
int main(){

    string moblie_number;
    string s = "689";
    cin >> moblie_number;
    if(moblie_number.size()!=10){
        cout << "Not a mobile number";
        return 0;
    }
    else{
        if(moblie_number[0]!='0'){
            cout << "Not a mobile number";
            return 0;
        }
        else{
            for(int i=0;i<3;i++){
                if(moblie_number[1]==s[i]){
                    cout << "Mobile number";
                    return 0;
                }
            }
        }

    }
    cout << "Not a mobile number";

}