#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cout << "Enter the size of the data/array: ";
    int n;
    cin >> n;
    int arr[n]; 

    // taking input for array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // sorting array using sort function
    sort(arr, arr + n);

    // output the sorted array
    cout << "Sorted list: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sum of the array
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum: " << sum << endl;

    // find the sum of the digits
    int digitSum = 0;
    int temp = sum;
    while (temp != 0) {
        int digit = temp % 10;
        digitSum += digit;
        temp /= 10;
    }

    cout << "Digit Sum: " << digitSum << endl;


    return 0;
}
