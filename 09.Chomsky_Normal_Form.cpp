#include<bits/stdc++.h>
using namespace std;

vector<string>words;
vector<string>p = {"he","she","I","we","you","they"};
vector<string>n = {"book","cow","dog","home","grass","rice","mango"};
vector<string>v = {"read","eat","take","run","write"};
vector<string>pn = {"Sagor","Selim","Salma","Nipu"};

bool checkForP(string str)
{
    for(int i = 0;i<p.size();i++)
    {
        if(p[i]==str)
        {
            return true;
        }
    }
    return false;
}
bool checkForN(string str)
{
    for(int i = 0;i<n.size();i++)
    {
        if(n[i]==str)
        {
            return true;
        }
    }
    return false;
}
bool checkForV(string str)
{
    for(int i = 0;i<v.size();i++)
    {
        if(v[i]==str)
        {
            return true;
        }
    }
    return false;
}
bool checkForPN(string str)
{
    for(int i = 0;i<pn.size();i++)
    {
        if(pn[i]==str)
        {
            return true;
        }
    }
    return false;
}

void splitWord(string str)
{
    string word = "";
    for (auto x : str)
    {
        if (x == ' ')
        {
            words.push_back(word);
            word = "";
        }
        else {
            word = word + x;
        }
    }
    if(word.size() > 0)
    {
        words.push_back(word);
    }
}

int main()
{
    // 'I/O' from file
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);
    int sz = str.size();

    splitWord(str);

    if(words.size() < 2 || words.size() > 3)
    {
        cout << "Invalid\n";
    }
    else{
        bool ok = false;
        if(checkForP(words[0]) || checkForPN(words[0]))
        {
            if(words.size()==2)
            {
                if(checkForV(words[1]))
                {
                    ok = true;
                }
                else{
                    ok = false;
                }
            }
            else if(words.size()==3)
            {
                if(checkForV(words[1]) && checkForN(words[2]))
                {
                    ok = true;
                }
                else {
                    ok = false;
                }
            }
        }
        if(ok){
            cout<<"Valid\n";
        }else{
            cout<<"Invalid\n";
        }

    }

}
