#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;
        int members = 120;  // initial number of members
        int days = 0;
        while (members < 1000) {
            days++;
            members += n;
            if (members >= m) {
                members += 2 * (members - m);
                break;
            }
        }
        if (members < 1000) {
            cout << "-1\n";
        } else {
            cout << days << "\n";
        }
    }
    return 0;
}
