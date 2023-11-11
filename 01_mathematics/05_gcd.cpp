#include<bits/stdc++.h> 
using namespace std;
//naive approach
// Time complexity O(min(a,b))
int gcd(int a,int b){
    int mini=min(a,b);
    int gcd=0;
     for(int i=1;i<=mini;i++){
        if(a%i==0 and b%i==0){
            gcd=i;
        }
     }
     return gcd;
}
// optimal 
int gcd1(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
   int a=4, b=6;
   cout<<gcd1(a,b)<<endl;
    return 0;
}