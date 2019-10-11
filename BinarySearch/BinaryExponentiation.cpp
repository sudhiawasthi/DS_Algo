#include<bits/stdc++.h>
using namespace std;

int BinaryExpo(int base, int exponent, int mod) 
{ 
    // Base cases 
    if (!base) 
        return 0; 
    if (!exponent) 
        return 1; 
  
  
    long y; 
    if (exponent & 1 == 0) { 
        y = BinaryExpo(base, exponent/2, mod);
        y = (y * y) % mod; 
    } 
  
   
    else { 
        y = base % mod; 
        y = (y * BinaryExpo(base, exponent-1, mod)  % mod) % mod; 
    } 
  
    return (int)((y + mod) % mod); 
} 
  

int main()  
{  
   int base, exponent, modulus;
   cin>>base>>exponent>>modulus>>endl;
   
  cout<<BinaryExpo(base, exponent, mod);  
   return 0;  
}
