#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    string ans = "";
    for (int j = 0; j < s.length(); j++) {
      if (s[j] == 'S') {
        ans += 'L';
      } else if (s[j] == 'L') {
        ans += 'S';
      } else if (s[j] == 'R') {
        ans += 'B';
      } else if (s[j] == 'B') {
        ans += 'R';
      }
    }
    cout << ans << endl;
  }
  return 0;
}
