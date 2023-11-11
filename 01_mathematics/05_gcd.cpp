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
int main()
{
   int a=7, b=13;
   cout<<gcd(a,b)<<endl;
    return 0;
}