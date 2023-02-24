#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            cout << char('A' + i);
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
