from collections import deque
def solution(N, stages):
    answer = []
    # 실패율 = 스테이지에 도달했으나 아직 클리어하지 못한 플레이어의 수 / 스테이지에 도달한 플레이어 수

    fail_rate = {i: 0 for i in range(1,N+1)}
    
    stages.sort()
    
    dstage = deque([i for i in stages])
    
    while(N):
        total_len = len(dstage)
        count = 0
        
        if total_len == 0 or dstage[0]>N:
            break
            
        else:
            for i in range(total_len):
                now = dstage.popleft()
                count += 1
                if len(dstage)>=1:
                    if now == dstage[0]:
                        continue
                    else: 
                        fail_rate[now] = count/total_len
                        break
                else: 
                    fail_rate[now] = count/total_len
                    break
    
    sorted_fail_rate = sorted(fail_rate.items(), key = lambda x: x[1], reverse = True)
    
    for i in range(len(sorted_fail_rate)):
        answer.append(sorted_fail_rate[i][0])
        
    return answer