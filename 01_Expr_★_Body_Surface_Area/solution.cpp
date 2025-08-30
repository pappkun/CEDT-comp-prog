#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main(){

    double w , h ;
    cin >> w >> h;

    double Mosteller = sqrt( w * h ) / 60 ;
    double Haycock = 0.024265 * pow( w , 0.5378 ) * pow( h , 0.3964 ) ;
    double Boyd = 0.0333 * pow( w , ( 0.6157 - 0.0188 * log10(w) ) ) * pow( h , 0.3 ) ;

    cout << setprecision(15) << Mosteller<<endl ;
    cout << setprecision(15) << Haycock<<endl ;
    cout << setprecision(15) << Boyd ; 

}
