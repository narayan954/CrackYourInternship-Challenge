#User function Template for python3
class Solution:
    def inverse(self, n, MOD):
        return pow(n, MOD-2, MOD)
        
	def getSum(self, X, Y, Z):
	    MOD = 10**9 + 7
	    fact, ones = [1], [0]
	    for i in range(1, X+Y+Z+1):
	        fact.append((fact[-1]*i)%MOD)
	        ones.append((ones[-1]*10 + 1)%MOD)
       
        res = 0 
        for i in range(X+1):
            for j in range(Y+1):
                for k in range(Z+1):
                    n = i + j + k
                    tot = 4*i + 5*j + 6*k
                    res = (res + (tot * fact[n-1] * ones[n] *self.inverse(fact[i]*fact[j]*fact[k], MOD)))%MOD
        return res


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		X,Y,Z = map(int,input().split())
		ob = Solution()
		ans = ob.getSum(X,Y,Z)
		print(ans)
# } Driver Code Ends
