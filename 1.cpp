#include <bits/stdc++.h>
using namespace std;

vector<char> v;
vector<char> ch;

int is_char(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}

int is_digit(char ch)
{
    if (ch >= '0' && ch <= '9')
        return 1;
    return 0;
}

void count(string str)
{
    int word_count = 1;
    int letter_count = 0;
    int digit_count = 0;
    int other_count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ' && (is_char(str[i + 1]) || is_digit(str[i + 1])))
            word_count++;
        if (is_char(str[i]))
            letter_count++;
        if (is_digit(str[i]))
            digit_count++;
        if (!is_digit(str[i]) && !is_char(str[i]))
            other_count++;
    }

    cout << "Number of words is = " << word_count << endl;
    cout << "Number of letter is = " << letter_count << endl;
    cout << "Number of digit is = " << digit_count << endl;
    cout << "Number of other Characters is = " << other_count << endl;
}

void separate(string str)
{
    char sep_letter[100], sep_digit[100], sep_other[100];
    int mark_letter = 0, mark_digit = 0, mark_other = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (is_char(str[i]))
        {
            // sep_letter[mark_letter++] = str[i];
            v.push_back(str[i]);
        }
        if (is_digit(str[i]))
        {
            // sep_digit[mark_digit++] = str[i];
            ch.push_back(str[i]);
        }
        if (!is_char(str[i]) && !is_digit(str[i]))
        {
            sep_other[mark_other++] = str[i];
        }
    }
    cout << "All Characters: ";
    for (auto a : v)
        cout << a;
    cout << endl;

    cout << "All digit: ";
    for (auto b : ch)
        cout << b;
    cout << endl;
    cout << "All other characters: " << sep_other << endl;
}

int main()
{
    string str = "Md. Tareq Zaman, Part-3,2011";
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // string str;
    // cin>>str;
    // getline(cin,str);
    cout << str << endl;

    count(str);
    separate(str);

    return 0;
}