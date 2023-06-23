#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    float area = (d / (d + 1)) * (a * b) / 2;
    cout << fixed << setprecision(2) << area << endl;
  }
  return 0;
}