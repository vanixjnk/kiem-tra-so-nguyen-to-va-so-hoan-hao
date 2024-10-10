#include <iostream>
using namespace std;

int main() {
    int n;
    int souoc = 0; 
    int tonguoc = 0; 
    cout << "Nhập số nguyên n: ";
    cin >> n;
    if (n < 2) {
        cout << n << " không phải là số nguyên tố" << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                souoc += 1;
            }
        }
        if (souoc == 2) { 
            cout << n << " là số nguyên tố" << endl;
        } else {
            cout << n << " không phải là số nguyên tố" << endl;
        }
    }

    tonguoc = 0;  
    for (int i = 1; i < n; i++) {  
        if (n % i == 0) {
            tonguoc += i;
        }
    }

    if (tonguoc == n) {
        cout << n << " là số hoàn thiện" << endl;
    } else {
        cout << n << " không là số hoàn thiện" << endl;
    }

    return 0;
}
