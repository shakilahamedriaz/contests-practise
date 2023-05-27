#include <iostream>

using namespace std;

long long calculateSum(int a, int b) {
    int n = (b - a) / 3 + 1;  // Number of terms in the series
    long long sum = (n * (2LL * a + 3 * (n - 1))) / 2;  // Sum formula: (n/2) * (2a + (n-1)*3)
    return sum;
}

int main() {
    int a, b;
    cin >> a >> b;

    long long result = calculateSum(a, b);
    cout << result << endl;

    return 0;
}
