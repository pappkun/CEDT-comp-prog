#include<iostream>
#include<string>
#include<vector>
using namespace std;

string one_nine[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teen[10] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string ty[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string scales[4] = {"thousand", "million", "billion", "trillion"};

vector<string> vec;

void print(int a){
    string s = vec[a];
    while(s.size() < 3) s = "0" + s;
    if(s == "000") return;

    if(s[0] != '0'){
        cout << one_nine[s[0]-'0'] << " hundred ";
    }

    if(s[1] == '1'){
        cout << teen[s[2]-'0'] << " ";
    }
    else {
        if(s[1] != '0') cout << ty[s[1]-'0'] << " ";
        if(s[2] != '0') cout << one_nine[s[2]-'0'] << " ";
    }
}

int main(){
    
    string str;
    cin >> str;

    if(str == "0"){
        cout << "zero";
        return 0;
    }

    int n = str.length();

    int i;
    if(n%3 != 0){
        vec.push_back(str.substr(0,n%3));
    }
    for(i=n%3;i<n;i=i+3){
        string s = str.substr(i,3);
        vec.push_back(s);
    }

    /*for(i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
    cout << endl;*/


    int N = vec.size();
    for(i=0;i<N;i++){
        print(i);
        if(i != N-1 && vec[i] != "000"){
            cout << scales[N-i-2] << " ";
        }
    }


}