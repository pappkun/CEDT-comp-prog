#include<iostream>
#include<string>
using namespace std;

int main(){

    int i,j;
    string str;
    getline(cin, str);
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    string check = "0123456789";
    for(i=0;i<str.length();i++){
        for(j=0;j<10;j++){
            if(str[i] == check[j]){
                a[j]++;
                break;
            }
        }
    }
    bool first = false;
    for(i=0;i<10;i++){
        if(a[i]==0){
            if(first){
                cout << ",";
            }
            cout << i;
            first = true;
        }
    }
    if(!first){
        cout << "None";
    }

}