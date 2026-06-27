#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1) {
            cout << "First non-repeating element: " << arr[i];
            return 0;
        }
    }

    cout << "No non-repeating element found";

    return 0;
}