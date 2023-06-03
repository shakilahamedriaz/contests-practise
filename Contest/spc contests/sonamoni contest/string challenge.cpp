#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    int len = S.size();
    int count = 0;
    for (int i = 0; i < len; i++) {

        char c = S[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
