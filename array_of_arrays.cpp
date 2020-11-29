#include<bits/stdc++.h>
#include<iostream>
using namespace std;

// MAKES AN ARRAY CONTAINING N VARIABLE SIZED ARRAYS AS ITS ELEMENTS 



void array_of_arrays(int n)
{
    int** ptr_arr=new int*[n];
    for(int i=0;i<n;i++)
    {
        int size_of_inner ;
        cin>>size_of_inner;
        ptr_arr[i]=new int[size_of_inner];
        for(int j=0;j<size_of_inner;j++)
        {
            cin>>ptr_arr[i][j];
        }
    }
}

int main()
{
    int n;
    cin>>n;
    
    array_of_arrays(n);
    return 0;
}
