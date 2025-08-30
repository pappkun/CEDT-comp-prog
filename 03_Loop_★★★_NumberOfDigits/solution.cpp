#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main(){

    long long n,m;
    cin >> m >> n;

    string sn = to_string(n);
    string sm = to_string(m);
    int r = sn.length();
    int l = sm.length();
    if(n==m){
        cout << l;
        return 0;
    }

    long long sum=0;
    int i,j;
    long long y = 9;
    long long x=l;
    for(i=l;i<=r-1;i++){
        y = 9;
        for(j=0;j<x-1;j++){
            y = y*10;
        }
        sum = sum + (y*x);
        x++;
    }

    long long sum2=0;
    x = l;
    long long z=1;
    for(i=0;i<l-1;i++){
        z = z*10;
    }
    sum2 = (m-z)*x;

    long long sum3=0;
    x = r;
    z = 1;
    for(i=0;i<r-1;i++){
        z = z*10;
    }
    sum3 = (n-z)*x;

    sum = sum-sum2+sum3+r;
    cout << sum;
}