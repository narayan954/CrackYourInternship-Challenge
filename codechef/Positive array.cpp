from heapq import heappush, heappop

for _ in range(int(input())):
    n = int(input())
    ls = list(map(int,input().split()))
    ls.sort()
    heap = [1]
    for i in ls:
        if i>=heap[0]:
            temp = heappop(heap)+1
            heappush(heap,temp)
        else:
            heappush(heap,2)
    print(len(heap))
