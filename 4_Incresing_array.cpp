/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

*/
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int mx = 0;
    long res = 0;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        mx = max(mx,x);
        res += (mx-x);
    }
    cout<<res;
    return 0;
}
