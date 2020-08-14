/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).
*/

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long n;
    cin>>n;
    int a[n-1];
    for(int i = 0; i<n-1; i++){
        cin>>a[i];
    }
    sort(a,a+(n-1));
    
    int i = 0;
    while(i<=n){
        if(a[i] != i+1){
            cout<<i+1;
            break;
        }
        i++;
    }
    
    /*
      int n, s=0;
      cin>>n;
      for(int i = 1;i<n-1;i++){
        int a;
        cin>>a;
        s+=a;
        }
        cout<<(n*(n+1)/2-s);
    
        */
    return 0;
}
