#include<iostream>
#include<math.h>
using namespace std;

int main(){

    double ans;
    double top = M_PI - ( 3628800 / pow(8,8) ) + pow( log(9.7) ,( ( 7 / sqrt(71) ) - sin(40*M_PI/180) ) ) ;
    double  bottom = pow( 1.2 , cbrt(2.3) ) ;

    ans = top / bottom ;
    cout << ans;

}