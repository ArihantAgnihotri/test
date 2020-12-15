


// GOD IS DEAD!!


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    string str="";
    string attribute;
    string value;
    cout<<""<<endl;

    vector<string> input;
    vector<string> queries;

    string * * reader = new string*[n];  // stores broken tag individually...

    while(n--)
    {
        getline(cin,str);
        input.push_back(str);
        str="";
    }

    cout<<""<<endl;

    while(q--)
    {
        getline(cin,str);
        queries.push_back(str);
        str="";
    }

    int c=0;

    for(string i:input)
    {
        int t=0;
        string temp="";
       for(int j=0;j<i.length();j++)
       {
           if(i[j]==' ')
           {
               reader[c]=new string[temp.length()]
               reader[c][t++]=temp;
               c+=1;
               break;
           }
           
           else
              temp+=i[j];   
       }
    } 



    return 0;
}