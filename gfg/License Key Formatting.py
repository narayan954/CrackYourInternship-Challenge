# User function Template for python3

import atexit
import io
import sys
from collections import defaultdict


class Solution:

    def ReFormatString(self, S, K):
        ls = "".join([i.upper() for i in S.split("-")])
        if len(S) <= K:
            return ls

        ans = ls[:len(ls) % K]

        for i in range(len(ls) % K, len(ls), K):
            ans += "-" + ls[i:i + K]

        return ans if ans[0] != "-" else ans[1:]


# {
# Driver Code Starts
# Initial Template for Python 3

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER


@atexit.register
def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s = str(input())
        k = int(input())
        obj = Solution()
        print(obj.ReFormatString(s, k))
# } Driver Code Ends
