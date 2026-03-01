def solution(sizes):
    answer = 0
    
    for i in range (len(sizes)):
        if sizes[i][0] < sizes[i][1]:
            temp = sizes[i][0]
            sizes[i][0] = sizes[i][1]
            sizes[i][1] = temp

    cur_r = sizes[0][0]
    cur_c = sizes[0][1]
    
    for i in range (len(sizes)-1):
        if cur_r < sizes[i+1][0]:
            cur_r = sizes[i+1][0]
            
    for i in range (len(sizes)-1):
        if cur_c < sizes[i+1][1]:
            cur_c = sizes[i+1][1]
            
    answer = cur_r * cur_c
    return answer