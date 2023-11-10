#include<bits/stdc++.h> 
using namespace std;
int fact(int n){
    if(n==0) return 1;
    return n * fact(n-1);

     //Time complexity
    //  T(n) = T(n-1) + theta(1)
    // Aux theta(n)
}
int main()
{   
    int n=6;
    // iterative
      //Time complexity
    //  T(n) =theta(n)
    // Aux = O(n)
    
    // while(n>0){
    //     fact*=n;
    //     n--;
    // }

    cout<<fact(n)<<endl;
}