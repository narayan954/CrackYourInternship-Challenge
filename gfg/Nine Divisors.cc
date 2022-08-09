//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long long nineDivisors(long long int N){
        long long c = 0; 
  
        long long limit = sqrt(N); 
        
        // Sieve array 
        long long prime[limit + 1]; 
        
        // initially prime[i] = i 
        for (int i = 1; i <= limit; i++) 
            prime[i] = i; 
        
        // use sieve concept to store the 
        // first prime factor of every number 
        for (int i = 2; i * i <= limit; i++) { 
            if (prime[i] == i) { 
                // mark all factors of i 
                for (int j = i * i; j <= limit; j += i) 
                    if (prime[j] == j) 
                        prime[j] = i; 
            } 
        } 
        
        // check for all numbers if they can be 
        // expressed in form p*q 
        for (int i = 2; i <= limit; i++) { 
            // p prime factor 
            long long p = prime[i]; 
        
            // q prime factor 
            long long q = prime[(int)i / prime[i]]; 
        
            // if both prime factors are different 
            // if p*q<=N and q!=1 && p!=q 
            if (p * q == i && q != 1 && p != q) { 
                c += 1; 
            } 
            else if (prime[i] == i) { 
        
                // Check if it can be expressed as p^8 
                if (pow(i, 8) <= N) { 
        
                    c += 1; 
                } 
            } 
        } 
        
        return c; 
        }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.nineDivisors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
