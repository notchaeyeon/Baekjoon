import heapq
def solution(scoville, K):
    answer = 0
    count = 0
    queue = scoville[:]
    heapq.heapify(queue)
    
    if queue[0] >= K:
        return 0

    while(len(queue)>1):
        i = heapq.heappop(queue)
        j = heapq.heappop(queue)
        cur = i + j*2

        heapq.heappush(queue, cur)
        count+=1
        
        if queue[0] >= K:
            return count                

    return -1
        