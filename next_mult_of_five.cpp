#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int next_mult(int n)
{
    if(n%5==0)
    return n;
    else
    {
        int div=n/5;
        
        if((div*5)>n)
        return (div*5);
        else
        {
            if((div*5)<n)
             return ((div+1)*5);
        }
        

    }
    return -1; 
    
}

int main()
{
    cout<<next_mult(38)<<endl;
    return 0;
}