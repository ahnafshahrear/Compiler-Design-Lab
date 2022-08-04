#include <bits/stdc++.h>

// Name: Ahnaf Shahrear Khan
// Date: 30.06.2k22

using namespace std;

typedef long long int int64;
typedef unsigned long long int uint64;

#define pb push_back

bool isVariable(string x)
{
    bool mark = true;
    if ((tolower(x[0]) < 'i') or (tolower(x[0]) > 'n'))
    {
        mark = false;
    }
    for (int i = 1; x[i]; i++)
    {
        if (tolower(x[0]) >= 'a' and tolower(x[0]) <= 'z')
        {
            continue;
        }
        else if (x[0] >= '0' and x[0] <= '9')
        {
            continue;
        }
        else 
        {
            mark = false;
            break;
        }
    }
    return mark;
}

bool isInt(string x)
{
    bool mark = true;
    for (int i = 0; x[i]; i++)
    {
        if (isdigit(x[i])) continue;
        else
        {
            mark = false;
            break;
        }
    }
    return mark;
}

int main()
{
    string word;
    cin >> word;
    if (isVariable(word)) 
    {
        cout << "Integer Variable";
    }
    else if (word.size() <= 4 and isInt(word)) 
    {
        cout << "ShortInt Number";
    }
    else if (isInt(word))
    {
        cout << "LongInt Number";
    }
    else cout << "Invalid Input or Undefined";
    return 0;
}