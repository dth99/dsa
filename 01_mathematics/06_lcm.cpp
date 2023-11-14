#include<bits/stdc++.h> 
using namespace std;

// Time Complexity = O(a*b -max(a,b))
int lcm(int a,int b){
    int res=max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    return res;
}
// Efficient solution 
// a*b = gcd(a,b) * lcm(a,b)
// so we use Euclidean Algorithm to find gcd
// then lcm= a*b/gcd(a,b)
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int lcm1(int a,int b){
    return a*b/gcd(a,b);
}
// time complexity = O(log(min(a,b)))
int main()
{
    int a=4,b=6;
    cout<<lcm(a,b)<<endl;
    return 0;
}