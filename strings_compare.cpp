#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    cout<<"";
    getline(cin,s2);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    int flag=0;


    for(int i=0;i<(min(s1.length(),s2.length()));i++)
    {
        if(s1[i]<s2[i])
        {
            flag=1;
            cout<<"-1"<<endl;
            break;
        }

        if(s1[i]>s2[i])
        {
            flag=1;
            cout<<"1"<<endl;
            break;
        }

    }

    if(flag==0)
    cout<<"0"<<endl;

    return 0;

}