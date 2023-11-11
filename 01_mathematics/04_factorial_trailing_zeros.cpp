#include<bits/stdc++.h> 
using namespace std;

// worst way 
int trailingZeroes(int n) {
        int zeroes=0;
        int fact=1;
        while(n!=0){
            fact*=n;
            n--;
        }
        while(fact%10==0){
            fact/=10;
            zeroes++;
        }
        return zeroes;
}
// efficient way
// the idea is to count how many 2, 5, we have in prime factorization in given in factorialization
// interersting fact number of 5s are going to be less the no. of 2s

// --------- this solution solve the major issue of overflow ---- 
int trailingZeroes1(int n) {

        int zeroes=0;
        for(int i=5;i<=n;i*=5){
            zeroes+=(n/i);
        }
        return zeroes;
}
int main()
{
    int n=100;
   cout<<trailingZeroes1(n);
    
    return 0;
}