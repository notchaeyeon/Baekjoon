from collections import deque

def solution(priorities, location):
    answer = 0
    count = 0
    queue = deque([[i, v] for i, v in enumerate(priorities)])    
    while(queue):
        cur_i, cur_v = queue.popleft()

        if any(cur_v < q[1] for q in queue):
            queue.append([cur_i, cur_v])
        else:
            if location == cur_i:
                return answer+1
            else:
                answer = answer + 1
            
            
    return answer