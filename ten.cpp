#include <bits/stdc++.h>

using namespace std;

vector<pair<string, string>> rules = { {"S", "S+S"}, {"S", "S*S"} };

int main()
{
    string stc = "", input;
    cin >> input;
    for (int i = 0; input[i]; i++)
    {
        stc += input[i];
        if (stc[stc.size() - 1] == 'x')
        {
            stc[stc.size() - 1] = 'S';
        }
        for (auto p: rules)
        {
            if (stc.compare(p.second) == 0)
            {
                stc = p.first;
            }
        }
        if (i == input.size() - 1 and stc == "S")
        {
            cout << "Accept\n";
            return 0;
        }
    }
    cout << "Reject\n";
}