#include<bits/stdc++.h>
using namespace std;

map<string,string>store;
map<string,string>year;
map<string,string>semester;
map<string,string>courseName;
map<string,string>courseType;

void setUpSampleText()
{
    store["CSE"] = "Computer Science & Engineerring";
    year["1"] = "1st year";
    year["2"] = "2nd year";
    year["3"] = "3rd year";
    year["4"] = "4th year";

    semester["1"] = "1st semester";
    semester["2"] = "2nd semester";
    semester["3"] = "3rd semester";
    semester["4"] = "4th semester";

    courseName["1"] = "System Analysis and Design";
    courseName["2"] = "Database Management System";
    courseName["3"] = "Digital Signal Processing";
    courseName["4"] = "Compiler Design";
    courseName["5"] = "Computer Networks";

    courseType["1"] = "Theory";
    courseType["2"] = "Lab";
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    getline(cin,str);

    setUpSampleText();

    int sz = str.size();
    int i = 0;
    string temp;
    while(str[i]!='-')
    {
        temp+=str[i];
        i++;
    }
    i++;
    cout<<store[temp]<<",";
    temp = str[i];
    i++;
    cout<<year[temp]<<",";
    temp = str[i];
    cout<<semester[temp]<<",";
    i++;
    temp = str[i];
    cout<<courseName[temp]<<",";
    i++;
    temp = str[i];
    cout<<courseType[temp];


}