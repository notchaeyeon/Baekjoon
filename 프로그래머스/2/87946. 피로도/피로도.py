def solution(k, dungeons):
    answer = [0]
    def dfs(cur_v, cur_k, step):
        visited[cur_v] = True

        if cur_k >= dungeons[cur_v][0]:
            cur_k = cur_k - dungeons[cur_v][1]
            step += 1
            answer[0] = max(step, answer[0])
        else:
            visited[cur_v] = False
            return
        
        for next_v in range(len(dungeons)):
            if visited[next_v] == False:
                dfs(next_v, cur_k, step)
        
        visited[cur_v] = False

                
    for i in range(len(dungeons)):
        visited = [False] * len(dungeons)
        dfs(i, k, 0)
        
    return answer[0]