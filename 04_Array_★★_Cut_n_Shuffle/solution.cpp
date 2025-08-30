#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    int i,j;
    int n;
    cin >> n;

    vector<string> deck(n);
    for(i=0;i<n;i++){
        cin >> deck[i];
    }
    
    string str;
    cin.ignore();
    getline(cin, str);
    int l = str.length();

    for(i=0;i<l;i++){
        // ตัด
        if(str[i] == 'C'){
            vector<string> newdeck(n);
            for(j=0;j<n/2;j++){
                newdeck[j] = deck[n/2 + j];
                newdeck[n/2 + j] = deck[j];
            }
            deck = newdeck;
        }
        // กรีด
        if(str[i] == 'S'){
            vector<string> newdeck(n);
            for(j=0;j<n/2;j++){
                newdeck[j*2] = deck[j];
                newdeck[2*j + 1] = deck[n/2 + j];
            }
            deck = newdeck;
        }
    }

    for(i=0;i<n;i++){
        cout << deck[i] << " ";
    }

}