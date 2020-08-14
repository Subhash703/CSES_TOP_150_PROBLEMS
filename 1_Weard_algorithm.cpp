/*
Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
    3→10→5→16→8→4→2→1

*/

void findArr(int n){
    if(n == 1){
        cout<<n<<" ";
        return;
    }
    if(n%2==0){
        cout<<n<<" ";
        findArr(n/2);
    }else{
        cout<<n<<" ";
        findArr(n*3+1);
    }
 }

int32_t main()
{
    c_p_c();
    
    int n;
    cin>>n;
    findArr(n);
    return 0;
}
