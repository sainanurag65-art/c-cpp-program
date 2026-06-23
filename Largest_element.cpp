#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    int *ptr, max;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ptr = arr;
    max = *ptr;

    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "Maximum element = " << max;

    return 0;
}