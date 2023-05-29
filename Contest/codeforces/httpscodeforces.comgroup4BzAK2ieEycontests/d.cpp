#include <iostream>
using namespace std;

void diva(int l, int r) {
    bool found = false;

    for (int i = l; i <= r; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            found = true;
            cout << i << " ";
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;
        diva(l, r);
    }

    return 0;
}
