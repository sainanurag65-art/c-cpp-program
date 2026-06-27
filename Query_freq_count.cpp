#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Frequency Count
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while(q--) {
        int x;
        cout << "Enter element to search: ";
        cin >> x;

        cout << x << " occurs " << freq[x] << " times" << endl;
    }

    return 0;
}