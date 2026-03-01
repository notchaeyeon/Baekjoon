from collections import deque

def solution(maps):
    answer = 0
    
    def bfs(maps):
        row_len = len(maps) #maps의 열(세로)
        col_len = len(maps[0]) #maps의 행(가로)
        visited = [[False] * col_len for _ in range(row_len)] #visited False로 초기화
        count = 0
        res = []
        directions =[
            (-1,0), #좌
            (1,0), #우
            (0,-1), #상
            (0,1) #하
        ]
        
        queue = deque()
        queue.append((0,0))
    
        while queue:
            cur_r, cur_c = queue.popleft() # 현재 위치
            
            if cur_r == row_len - 1 and cur_c == col_len - 1:
                return maps[cur_r][cur_c]
            
            for dr, dc in directions:
                # 다음 노드
                next_r = cur_r + dr
                next_c = cur_c + dc
                #다음 노드가 maps 내에 있다면
                if (next_r>=0 and next_r < row_len) and (next_c>=0 and next_c <col_len):
                    # 현재 노드가 방문 할 수 있는 노드라면 (막혀있지 않다면)
                    if maps[next_r][next_c] == 1:
                        # 현재 노드가 방문을 아직 안했다면 
                        if visited[next_r][next_c] == False:
                            queue.append((next_r, next_c))
                            visited[next_r][next_c] = True
                            maps[next_r][next_c] = maps[cur_r][cur_c] + 1       
            
        return 0

    res = bfs(maps) 
    
    if res == 0:
        answer = -1
    else: 
        answer = res
        
    return answer