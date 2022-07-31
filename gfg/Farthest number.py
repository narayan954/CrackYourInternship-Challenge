from typing import List


class Solution:

    @staticmethod
    def farNumber(N: int, A: List[int]) -> List[int]:
        result = [-1] * len(A)
        rt_index = -1
        for val, ind in sorted((val, ind) for ind, val in enumerate(A)):
            result[ind] = rt_index if rt_index > ind else -1
            rt_index = max(rt_index, ind)
        return result


# {
#  Driver Code Starts
class IntArray:

    def __init__(self) -> None:
        pass

    @staticmethod
    def Input(n):
        arr = [int(i) for i in input().strip().split()]  # array input
        return arr

    @staticmethod
    def Print(arr):
        for i in arr:
            print(i, end=" ")
        print()


if __name__ == "__main__":
    t = int(input())
    for _ in range(t):

        N = int(input())

        A = IntArray().Input(N)

        obj = Solution()
        res = obj.farNumber(N, A)

        IntArray().Print(res)

# } Driver Code Ends
