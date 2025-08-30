#include<iostream>
#include<string>
using namespace std;
int main(){

    string check = "YGNBPK";
    string point = "RYGNBPK";
    
    int i,j,k,n;
    cin >> n;
    cin.ignore();
    for(i=0;i<n;i++){
        string str;
        getline(cin, str);

        //ตัวแรกไม่ใช่ R
        if(str[0] != 'R'){
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        int N = str.length();

        bool c = false;
        for(j=0;j<N;j+=2){
            //R R ติดกัน
            if(str[j] == 'R' && str[j+2] == 'R'){
                cout << "WRONG_INPUT" << endl;
                c = true;
                break;
            }
            
            //หลัง R ? 
            if(str[j-4] == 'R' && str[j] != 'R'){
                int x = 0;
                for(k=j;k<N;k+=2){
                    if(x>6){
                        cout << "WRONG_INPUT" << endl;
                        c = true;
                        break;
                    }
                    if(str[k] != check[x]){
                        cout << "WRONG_INPUT" << endl;
                        c = true;
                        break;
                    }
                    x++;
                }
                if(c == true) break;
            }
        }
        if(c == true) continue;

        int score = 0;
        for(j=0;j<N;j+=2){
            for(k=0;k<7;k++){
                if(str[j] == point[k]){
                    score = score + k + 1;
                    break;
                }
            }
        }

        cout << score << endl;

    }

}