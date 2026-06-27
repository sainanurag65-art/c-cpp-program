#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout<<"Enter the Size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cout<<"Enter the elements: ";
        cin >> arr[i];
    }

    map<int, int> freq;

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int maxFreq = 0;
    int element;

    for(auto x : freq) {
        if(x.second > maxFreq) {
            maxFreq = x.second;
            element = x.first;
        }
    }

    cout << "Element = " << element << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}