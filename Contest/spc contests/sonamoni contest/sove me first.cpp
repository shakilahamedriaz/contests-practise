#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;
    if (a != b) {
        cout << b * b / a << endl;
    } else {
        cout << a << endl;
    }
    return 0;
}
