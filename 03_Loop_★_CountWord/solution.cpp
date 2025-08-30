#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    // input
    string str;
    cin >> str;
    cin.ignore();
    string all;
    getline(cin, all);

    int i,j;
    int n = all.length();
    vector<string> vec;

    // แยกคำ
    for(i=0;i<n;i++){
        if( (all[i] >= 'a' && all[i] <= 'z') || (all[i] >= 'A' && all[i] <= 'Z') ){
            string a;
            for(j=i; (all[j] >= 'a' && all[j] <= 'z') || (all[j] >= 'A' && all[j] <= 'Z') ;j++){
                char b = all[j];
                a = a+b;
            }
            i = j;
            vec.push_back(a);
        }
    }

    n = vec.size();
    int c=0;
    for(i=0;i<n;i++){
        if(str == vec[i]){
            c++;
        }
    }
    
    //output
    cout << c;


}