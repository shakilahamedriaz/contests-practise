#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    while(n > 0) {
        int digit = n % 10; // Extract last digit
        sum += digit; // Add the digit to sum
        n /= 10; // Remove last digit
    }
    cout << sum << endl;
    return 0;
}
