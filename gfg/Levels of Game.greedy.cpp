//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
   public:
       int maxLevel(int h,int m)
       {
           int canone=1;            //1 shows we can use 1st road this time & 0 shows we can't
           int level=0;             // initially we are at level 0
           while(h>0 && m>0){
               if(canone){          //if we can use 1st road we travel on it
                   h+=3;
                   m+=2;
                   level++;
                   canone=0;
               } else {             //if we can't use first road we try others
                   canone=1;
                   if(h>5 && m>10){ //Travelling second road if possible
                       h-=5;
                       m-=10;
                   } else if(h>20){ //Travelling third road if possible
                       h-=20;
                       m+=5;
                   } else {         //If none of the road can be travelled , break the loop
                       break;
                   }
                   level++;
               }
           }
           return level;
       }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution a;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<a.maxLevel(h,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends
