#include <iostream>
#include <string>

using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    string pi = "3141592653589793238462643383279";
    while (t--) {
        string n;
        cin >> n;
        ll cnt = 0;

        for (ll i = 0; i < n.length(); i++) {

            if (n[i] == pi[i]) {

                cnt++;
            }

            else{
                break;
            }

        }
        cout << cnt << endl;
    }
    return 0;
}
