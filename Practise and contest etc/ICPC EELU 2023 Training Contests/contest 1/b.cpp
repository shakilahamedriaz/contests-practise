#include <iostream>
using namespace std;

bool has_common_divisor(int a, int b) {
    for (int i = 1; i <= std::min(a, b); ++i) {
        if (a % i == 0 && b % i == 0) {
            return true;
        }
    }
    return false;
}

int main() {
    int a, b;
    cin >> a >> b;

    if (has_common_divisor(a, b)) {
        cout << "Yes" << std::endl;
    } else {
        cout << "No" << std::endl;
    }

    return 0;
}
