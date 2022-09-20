class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        long long n=1;
        long long temp;
        while(true){
            temp = (n*(n+1))/2;
            if (temp >= target) break;
            n++;
        }
        int diff = (n*(n+1))/2 - target;
        while(diff%2){
            n++;
            diff+=n;
        }
        return n;
    }
};

// More Optimized / Better Solution
class Solution {
public:
    int reachNumber(int target) {
        target = abs(target);
        int k = 0;
        while (target > 0)
            target -= ++k;
        return target % 2 == 0 ? k : k + 1 + k%2;
    }
};
