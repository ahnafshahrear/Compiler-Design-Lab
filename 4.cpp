#include<bits/stdc++.h>
using namespace std;

bool isCharacter(char c)
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        return true;
    }
    return false;
}
// bool isDigit(char c)
// {
//     if(c>='0' && c<='9')
//     {
//         return true;
//     }
//     return false;
// }

bool isAllDigit(string str)
{
    int sz = str.size();
    for(int i = 0;i<sz;i++)
    {
        if(isdigit(str[i])) continue;
        else return false;
    }
    return true;
}

bool isOther(string str)
{
    int sz = str.size();
    for(int i = 0;i<sz;i++)
    {
        if(isdigit(str[i]) || isCharacter(str[i]))
        {
            continue;
        }else{
            return true;
        }
    }
    return false;
}


int main()
{
    // 'I/O' from file 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    string str;
    getline(cin,str);

    int sz = str.size();

    if(isOther(str))
    {
        cout<<"Undefined";
    }
    else if((str[0]>='i' && str[0]<='n') || (str[0]>='I' && str[0]<='N'))
    {
        cout<<"Integer variable";
    }
    else if(isAllDigit(str) && str[0]=='1' && sz<=4)
    {
        cout<<"ShortInt Number";
    }
    else if(isAllDigit(str) && str[0]=='1')
    {
        cout<<"LongInt Number";
    }
    else{
        cout<<"Invalid Input";
    }

}