#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int mod(int n) // simple mod operation
{
    if(n<0)
    return 0-n;
    else
    {
        return n;
    }
}

// to  make for nearest multiple of i, replace 5 by i...
int multiple(int n) // returns the nearest multiple of 5 from n.
{
    // let n=24...
    int div = n / 5; // 4

	int lb_temp = n - (5*div); // 24-5*4=4
	int lb = mod(lb_temp);

	int ub_temp = n-(5*(div+1)); // 24-5*5=-1
	int ub = mod(ub_temp);

	int mb = 5 * div;

	int min_val= min(lb, min(ub, mb));
	
	if (min_val == ub)
		return (5*(div+1));

	if (min_val == lb)
		return (5 * div);

	if (min_val == mb)
		return (5 * div);
		
	return -1; // confused case

}

int main()
{
	cout<< multiple(27);
    return 0;
}