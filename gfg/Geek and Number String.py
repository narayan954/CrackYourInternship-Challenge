# User function Template for python3


class Solution:

    def minLength(self, s, n):
        ls = [9, 2, 1, 4, 3, 6, 5, 8, 7, 0]
        st = []

        for i in range(n):
            if st and ls[st[-1]] == int(s[i]):
                st.pop()
            else:
                st.append(int(s[i]))

        return len(st)


# {
# Driver Code Starts
# Initial Template for Python 3

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        s = input()
        ob = Solution()
        print(ob.minLength(s, n))
# } Driver Code Ends
