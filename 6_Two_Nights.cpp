/*
Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.
from all possibilities of placing two knghts , you can substract those ones in which they both attack each other…(which are 4*(n-1)*(n-2) for given nXn board)
*/
#include<iostream>
#include<algorithm>

using namespace std;



int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a1 = i*i, a2 = a1*(a1-1)/2;
        if(i>2){
            a2 -= 4*(k-1)*(k-2);
        }
        cout<<a2<<"\n";
    }

    return 0;
}
