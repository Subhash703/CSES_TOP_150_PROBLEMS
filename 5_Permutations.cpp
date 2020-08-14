/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists
*/

#include<iostream>
#include<algorithm>

using namespace std;



int main()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return 0;
    }
    if(n%2 == 0){
        for (int i = 2; i <= n; i+=2)
            cout<<i<<" ";
        for (int i = 1; i <=n ; i+=2)
        {
            cout<<i<<" ";
        }
    }
    else{
        for (int i = n-1; i > 0; i-=2)
            cout<<i<<" ";
        for (int i = n; i > 0; i-=2)
            cout<<i<<" ";
    }

    return 0;
}
