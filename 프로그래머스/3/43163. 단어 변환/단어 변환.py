def solution(begin, target, words):
    answer = [100]
    
    def dfs(cur_v,step):
        if cur_v == target:
            answer[0] = min(step, answer[0])
            return
            
        visited[cur_v] = True
        
        for next_v in words:
            if visited[next_v] == False and same(cur_v, next_v):
                dfs(next_v, step+1)
                visited[next_v] = False
                
    visited = {}  
    visited[begin] = False
    for w in words:
        visited[w] = False
        
    dfs(begin,0)
    if answer[0]==100:
        return 0
    else:
        return answer[0]
    
def same(w1, w2):
    count = 0
    for i in range(len(w1)):
        if w1[i] != w2[i]:
            count+=1
    if count == 1:
        return 1
    else:
        return 0