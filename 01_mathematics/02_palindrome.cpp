#include<bits/stdc++.h> 
using namespace std;
bool isPalindrome(int x) {
      long long copyX=x;
        long long reverse=0;
        if(x<0) return false;
        
        while(x!=0){
            int lastDigit=x%10;
            reverse=reverse*10+lastDigit;
            x/=10;
        }
       return copyX==reverse;  
    }
int main()
{   
    int n=121;
    cout<<isPalindrome(n)<<endl; 
    return 0;
}