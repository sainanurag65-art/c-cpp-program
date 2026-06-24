#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int last = v[v.size() - 1];

    for(int i = v.size() - 1; i > 0; i--)
    {
        v[i] = v[i - 1];
    }

    v[0] = last;

    cout << "Rotated Vector:\n";

    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}