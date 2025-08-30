#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int i;
    float sum=0.0;
    for(i=0;i>=0;i++){
        float n;
        cin >> n;
        if(n == -1){
            break;
        }
        sum = sum + n;
    }
    if(i==0){
        cout << "No Data";
        return 0;
    }

    float avg = sum/i;
    avg =  round(avg*100)/100;

    cout << avg;

}