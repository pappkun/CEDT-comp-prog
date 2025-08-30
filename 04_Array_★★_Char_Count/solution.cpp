#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){

    string str;
    getline(cin, str);

    map<char,int> m;
    for(int i=0;i<str.length();i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i]+32;
        }

        if(str[i] >= 'a' && str[i] <= 'z'){
            m[str[i]]++;
        }
    }

    for(auto itr = m.begin(); itr != m.end(); itr++){
        cout << itr->first << " -> " << itr->second << endl;
    }

}