def solve(arr,n):
    temp = sorted(arr)
    l=r=0
    mark = set()
    while r<n:
        while l<n and temp[r]!=arr[l]:
            l+=1
        if l==n:
            break
        mark.add(l)
        l+=1
        r+=1
    if r==n:
        return True
    l=0
    while r<n:
        if l in mark:
            l+=1
            continue
        if temp[r]!=arr[l]:
            return False
        l+=1
        r+=1
    return True



for _ in range(int(input())):
    n = int(input())
    ls = list(map(int,input().split()))
    print("YES" if solve(ls,n) else "NO")
