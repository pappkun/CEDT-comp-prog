#include<bits/stdc++.h>
using namespace std;


int main(){

    string s[3];
    int i;
    for(i=0;i<3;i++){
        cin>>s[i];
    }
    int n = s[1].size();
    int m = s[2].size();
    
    int a = stoi(s[1]+s[2]) - stoi(s[1]);
    string str;
    for(i=0;i<m;i++){
        str = str+'9';
    }
  
    for(i=0;i<n;i++){
        str = str+'0';
    }

    int b = stoi(str);
    int g = __gcd(a,b);

    cout<<a/g+stoi(s[0])*b/g<<" / "<<b/g;

    

}