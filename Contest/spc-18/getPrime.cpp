#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    string s;
    cin >> s;
    int n = s.length();
    bool found = false;
    for (int j = 0; j <= n - 5; j++) {
      if (s.substr(j, 5) == "prime") {
        found = true;
        break;
      }
    }
    if (found) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}