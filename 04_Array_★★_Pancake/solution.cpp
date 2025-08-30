#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// พลิกกองแพนเค็ก
void flip(vector<int>& pancake, int i) {
    reverse(pancake.begin(), pancake.begin() + i + 1);
}

// ปริ้นแพนเค้ก
void print_pancake(vector<int>& pancake, int n){
    for(int i=0;i<n;i++){
        cout << pancake[i] << " ";
    }
    cout << endl;
}

int main() {
    int i;
    int n;
    cin >> n;

    vector<int> pancake(n);
    for (i=0;i<n;i++) {
        cin >> pancake[i];
    }

    for (i=0;i<n;i++) cout << pancake[i] << " ";
    cout << endl;

    for (i=n;i>1;i--){
        // หาตำแหน่งของค่าใหญ่สุดในกอง 0 -> i-1
        int x = max_element(pancake.begin(), pancake.begin() + i) - pancake.begin();

        // แผ่นใหญ่ที่สนใจอยู่ล่างสุดแล้ว
        if (x == i - 1) continue;

        // พลิกให้ชิ้นใหญ่อยู่บนสุด
        if (x != 0) {
            flip(pancake, x);
            print_pancake(pancake,n);
        }

        // พลิกให้ชิ้นใหญ่อยู่ล่างสุด
        flip(pancake, i - 1);
        print_pancake(pancake,n);
    }

}
