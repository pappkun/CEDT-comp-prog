#include<bits/stdc++.h>
using namespace std;
int main(){

    string s = "ABCD";
    double a[4] = {80,70,60,50};
    double score;
    cin >> score;
    int i;
    for(i=0;i<4;i++){
        if(score>=a[i]){
            cout << s[i];
            return 0;
        }
    }
    cout << "F";

}