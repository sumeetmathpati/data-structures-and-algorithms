#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int reverseSort(vi input) {

    int cost = 0;

    for (int i = 0; i < input.size()-1; i++) {
        int m = *min_element(input.begin()+i, input.end());

        auto x = find(input.begin(), input.end(), m);

        reverse(input.begin()+i, x+1);

        cost += distance(input.begin(), x) - i + 1;
    }

    return cost;
}

int main()
{

    int t;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        vi inp;

        for (int j = 0; j < n; j++)
        {
            int num;
            cin >> num;
            inp.push_back(num);
        }

        cout << reverseSort(inp) << " ";
    }

    return 0;
}