#include<iostream>
#include<string>
using namespace std;
int main(){

    string a;
    cin >> a;
    cin.ignore();
    string b;
    getline(cin, b);
    
    int na = a.length();
    int nb = b.length();
    int i;
    
    if(na != nb){
        cout << "Incomplete answer";
        return 0;
    }

    int c=0;
    for(i=0;i<na;i++){
        if(a[i] == b[i]){
            c++;
        }
    }
    
    cout << c;

}