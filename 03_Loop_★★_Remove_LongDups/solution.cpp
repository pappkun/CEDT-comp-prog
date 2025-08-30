#include<iostream>
#include<string>
using namespace std;

int main(){

    string str;
    int k;
    cin >> str >> k;

    string ans;
    int i,j;
    int n = str.length();
    for(i=0;i<n;i++){
        int c=0;
        for(j=i ;j<n; j++){
            if(str[j] != str[i]){
                break;
            }
            c++;
        }
        if(c>=k){
            i = j-1;
        }
        else{
            char cha = str[i];
            ans = ans + cha;
        }
    }

    cout << ans;

}