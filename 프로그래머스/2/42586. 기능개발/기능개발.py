from collections import deque

def solution(progresses, speeds):
    answer = []
    queue = deque([[i, j] for i, j in zip(progresses,speeds)])    
    
    while(queue):
        k = 0
        count = 0
        while(queue[0][0] < 100):
            count = count + 1
            queue[0][0] = queue[0][0]+queue[0][1]
        
        queue.popleft()
        k = k + 1
        
        for i in range(len(queue)):
            queue[i][0] = queue[i][0]+queue[i][1]*count
            
        while(queue):
            if queue[0][0] >= 100:
                queue.popleft()
                k = k + 1
            else: 
                answer.append(k)
                break
                
    answer.append(k)
            
    return answer