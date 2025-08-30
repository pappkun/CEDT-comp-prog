#include<iostream>
#include<iomanip>
using namespace std;

double tao(double a , double b){
    return a + (1/b);
}

int main(){

    int n,i,j;
    cin >> n;
    double a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }

    double ans[n];
    ans[0] = a[0];
    for(i=1;i<n;i++){
        ans[i] = a[i];
        for(j=i;j>0;j--){
            ans[i] = tao(a[j-1],ans[i]);
        }
    }
    
    for(i=0;i<n;i++){
        cout << setprecision(10) << ans[i] << endl;
    }

}