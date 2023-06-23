#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateArea(double ab, double bc, double ac, double ratio) {
    double de = (bc * ratio) / (1 + ratio);
    double ae = ac - de;
    double semiPerimeter = (ab + de + ae) / 2;

    double area = sqrt(semiPerimeter * (semiPerimeter - ab) * (semiPerimeter - de) * (semiPerimeter - ae));

    return area;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        double ab, bc, ac, ratio;
        cin >> ab >> bc >> ac >> ratio;

        double area = calculateArea(ab, bc, ac, ratio);

        cout << fixed << setprecision(2) << area << endl;
    }

    return 0;
}
