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

bool isOther(string str)
{
    int sz = str.size();
    for(int i = 0;i<sz;i++)
    {
        if(isdigit(str[i]) || isCharacter(str[i]) || str[i]=='.')
        {
            continue;
        }else{
            return true;
        }
    }
    return false;
}

int isFloat(string str)
{
    int sz = str.size();
    int i = 0;
    while(i<sz && str[i]!='.')
    {
        if(str[i]<'0' && str[i]>'9') return 0;
        i++;
    }
    i++;
    int cnt = 0;
    for(;i<sz;i++)
    {
        if(str[i]<'0' && str[i]>'9') return 0;
        cnt++;
    }
    return cnt;
}



int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);

    int ln = str.size();

    if(isOther(str))
    {
        cout<<"Invalid Input or Undefined\n";
    }
    else if((str[0]>='a' && str[0]<='h') || (str[0]>='A' && str[0]<='H') || (str[0]>='o' && str[0]<='z') || (str[0]>='O' && str[0]<='Z'))
    {
        cout<<"Float Variable\n";
    }
    else if((isFloat(str)==2 || isFloat(str)==1) && ((str[0]>='0' && str[0]<='9') || str[0]=='.'))
    {
        cout<<"Float Number\n";
    }
    else if(isFloat(str)>2 && ((str[0]>='0' && str[0]<='9') || str[0]=='.'))
    {
        cout<<"Double Number\n";
    }
    else{
        cout<<"Invalid Input or Undefined else\n";
    }
    

}