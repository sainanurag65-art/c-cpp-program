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

    vector<int> result;

    for(int i = 0; i < v.size(); i++)
    {
        bool duplicate = false;

        for(int j = 0; j < result.size(); j++)
        {
            if(v[i] == result[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
        {
            result.push_back(v[i]);
        }
    }

    cout << "After removing duplicates:\n";

    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}