#User function Template for python3

class Solution:
    def numProvinces(self, adj, V):
        visited = [0]*V
        count = 0
        for i in range(V):
            if not visited[i]:
                count += 1
                self.dfs(i,visited,adj,V)
        return count

    def dfs(self,u,visited,adj,V):
        visited[u] = 1
        for i in range(V):
            if adj[u][i] and not visited[i]:
                self.dfs(i,visited,adj,V)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        V=int(input())
        adj=[]

        for i in range(V):
            temp = list(map(int,input().split()))
            adj.append(temp);

        ob = Solution()
        print(ob.numProvinces(adj,V))
# } Driver Code Ends
