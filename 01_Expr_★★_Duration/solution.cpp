#include<bits/stdc++.h>
using namespace std;
int main(){

    int sh,sm,ss;
    int ah,am,as;
    cin>>sh>>sm>>ss>>ah>>am>>as;
    int a = ((sh*3600)+(sm*60)+ss);
    int b = ((ah*3600)+(am*60)+as);
    int c = (b-a+86400)%86400;
    int h,m,s;
    h = c/3600;
    c = c%3600;
    m = c/60;
    c = c%60;
    s = c;

    cout<<h<<":"<<m<<":"<<s;

}