def solution(n, computers):
    answer = 0

    def dfs(cur_v):
        visited[cur_v] = True
        for next_v in range(n):
            if computers[cur_v][next_v]==1 and visited[next_v] == False:
                dfs(next_v)  
                
                
    visited = [False] * n
    
    for i in range(n):
        if visited[i] == False:
            answer+=1    
            dfs(i)           

    return answer
    


