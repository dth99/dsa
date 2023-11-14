#include<bits/stdc++.h> 
using namespace std;

// O(n)
bool isPrime(int n){
    if(n==1) return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}
// O(sq.rt(n))
bool isPrime1(int){
    
}
int main()
{
    int n=253;
    cout<<isPrime(n);
    return 0;
}