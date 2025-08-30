#include<bits/stdc++.h>
using namespace std;
int main(){

    string str[27] = {"01" , "02" , "20" , "21" , "22" , "23" ,"24" , "25" , "26" , "27" , "28" , "29" , "30"
                    ,"31" , "32" , "33" , "34" , "35" , "36" , "37" , "38" , "39" , "40" , "51" , "53" , "55" , "58"  };
                
    string s;
    cin >> s;
    int i;
    for(i=0;i<27;i++){
        if(s==str[i]){
            cout << "OK";
            return 0;
        }
    }
    cout << "Error";
    
    
}