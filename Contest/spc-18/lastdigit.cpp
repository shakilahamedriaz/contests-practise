#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int lastDigit = 1;
    
    for (int i = 0; i < n; i++) {
      int digit = arr[i] % 10;
      lastDigit = (lastDigit * digit) % 10;
    }
    cout << lastDigit << endl;
  }
  return 0;
}
