#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){

    int n,i,j;
    cin >> n;
    
    pair<string,int> p[n];
    for(i=0;i<n;i++){
        cin >> p[i].first >> p[i].second;
    }

    cin.ignore();
    string str;
    getline(cin, str);

    vector<string> vec;
    int l = str.length();
    for(i=1;i<l;i++){
        if(str[i-1]=='-'){
            string a;
            for(j=i;j<l;j++){
                if(str[j] == ' ') break;
                char cha = str[j];
                a = a + cha;
            }
            vec.push_back(a);
        }
    }

    int sum = 0;
    for(i=1;i<vec.size();i++){
        if(vec[i] != vec[i-1]){
            for(j=0;j<n;j++){
                if(vec[i] == p[j].first){
                    sum = sum + p[j].second;
                    break;
                }
            }
        }
    }

    cout << sum;

}