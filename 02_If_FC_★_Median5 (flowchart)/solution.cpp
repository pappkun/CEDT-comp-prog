#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[5],i;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    sort(a,a+5);
    cout<<a[2];

}