/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

*/

#include<iostream>
#include<algorithm>

using namespace std;



int main()
{
    string s;
    cin>>s;
    int res = 1;
    for(int i = 1; i<s.length()-1; i++){
        int count = 1;
        while(s[i] == s[i-1]){
            count++;
            i++;
        }
        res = max(res,count);
    }
    cout<<res;
    return 0;
}
