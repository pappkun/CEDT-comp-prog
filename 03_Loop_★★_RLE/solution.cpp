#include<iostream>
#include<string>
using namespace std;

int main(){

    string s;
    cin >> s;
    int i,j;
    int n = s.length();

    for(i=0;i<n;i++){
        int c=0;
        for(j=i ; s[i]==s[j] ; j++){
            c++;
        }
        cout << s[i] << " " << c << " ";
        i = j-1;
    }

}