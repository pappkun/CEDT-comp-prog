#include<iostream>
#include<string>
using namespace std;

int main(){

    pair<string,string> name_nickname[10] = { {"Robert","Dick"} , {"William","Bill"} , {"James","Jim"} , {"John","Jack"} 
    , {"Margaret","Peggy"} , {"Edward","Ed"} , {"Sarah","Sally"} , {"Andrew","Andy"} , {"Anthony","Tony"} , {"Deborah","Debbie"} } ;

    int n;
    cin >> n;
    int i,j;
    for(i=0;i<n;i++){
        string str;
        cin >> str;
        bool found = false;
        for(j=0;j<10;j++){
            if(str == name_nickname[j].first){
                cout << name_nickname[j].second << "\n";
                found = true;
                break;
            }
        }
        for(j=0;j<10;j++){
            if(str == name_nickname[j].second){
                cout << name_nickname[j].first << "\n";
                found = true;
                break;
            }
        }
        if(!found){
            cout << "Not found" << "\n";
        }
    }

}