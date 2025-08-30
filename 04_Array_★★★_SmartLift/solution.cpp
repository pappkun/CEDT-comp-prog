#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin >> n;
    pair<int,int> l[n];
    int i,j;
    for(i=0;i<n;i++){
        int a;
        cin >> a;
        cin >> l[a-1].first >> l[a-1].second;
    }

    int m;
    cin >> m;
    pair<int,int> q[m];

    for(i=0;i<m;i++){
        cin >> q[i].first >> q[i].second;
    }

    for(i=0;i<m;i++){
        int x[n];
        int mn = 1e9;
        for(j=0;j<n;j++){
            // ลิฟไม่ได้ไปไหน
            if(l[j].first == l[j].second){
                x[j] = abs(q[i].first - l[j].first) + abs(q[i].second - q[i].first);
            }

            // ลิฟไปทางเดียวกันกันมั้ย
            else if( (q[i].second > q[i].first) == (l[j].second > l[j].first) ){
                //ถ้าลิฟขึ้น
                if(q[i].second > q[i].first){
                    //เราอยู่ระหว่างทางของลิฟหรือป่าว
                    if(q[i].first >= l[j].first && q[i].first <= l[j].second){
                        x[j] = q[i].second - l[j].second;
                        if(x[j] < 0) x[j] = 0;
                    }
                    // ลิฟอยู่ข้างล่างเรามั้ย
                    else if(l[j].second < q[i].first){
                        x[j] = q[i].second - l[j].second;
                    }
                    else{
                        x[j] = (l[j].second - q[i].first) + (q[i].second - q[i].first);
                    }
                }
                // ถ้าลิฟลง
                else{
                    //เราอยู่ระหว่างทางของลิฟหรือป่าว
                    if(q[i].first <= l[j].first && q[i].first >= l[j].second){
                        x[j] = l[j].second - q[i].second;
                        if(x[j] < 0) x[j] = 0;
                    }
                    // ลิฟอยู่ข้างบนเรามั้ย
                    else if(l[j].second > q[i].first){
                        x[j] = l[j].second - q[i].second;
                    }
                    else{
                        
                        x[j] = (q[i].first - l[j].second) + (q[i].first - q[i].second);
                    }
                }
            }
            // สวนทางกัน
            else{
                x[j] = abs(l[j].second - q[i].first) + abs(q[i].second - q[i].first);
            }

            mn = min(mn, x[j]);
        }
        /*for(j=0;j<n;j++){
            cout << x[j] << " ";
        }
        cout << endl;*/
        for(j=0;j<n;j++){
            if(mn == x[j]){
                cout << ">> " << j+1 << endl;;
                break;
            }
        }
    }

}