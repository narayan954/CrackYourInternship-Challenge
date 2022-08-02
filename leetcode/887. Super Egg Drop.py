class Solution:
    def superEggDrop(self, K: int, N: int) -> int:
        def solve(x):
            ans = 0
            r = 1
            for i in range(1, K+1):
                r *= x-i+1
                r //= i
                ans += r
                if ans >= N: break
            return ans

        low, hii = 1, N
        while low < hii:
            mid = (low + hii) // 2
            if solve(mid) < N:
                low = mid + 1
            else:
                hii = mid
        return low
