from collections import deque
import re
def solution(dartResult):
    answer = 0
    
    result = re.findall(r"\d{1,2}[SDT][*#]?", dartResult)
    score = [0, 0, 0]
    
    for i in range(3):
        if result[i][1] == "S":
            score[i] = int(result[i][0])
        elif result[i][1] == "D":
            score[i] = int(result[i][0])**2
        elif result[i][1] == "T":
            score[i] = int(result[i][0])**3
            
        elif result[i][1] == "0":
            if result[i][2] == "S":
                score[i] = 10
            elif result[i][2] == "D":
                score[i] = 10**2
            elif result[i][2] == "T":
                score[i] = 10**3
            
    # 1번쨰
    if len(result[0]) == 3:
        if score[0] != 10:
            if result[0][2] == "*":
                score[0] = score[0]*2
            elif result[0][2] == "#":
                score[0] = score[0]*-1
    elif len(result[0]) == 4:
        if score[0] != 10:
            score[0] == score[0] *-2
        else:
            if result[0][3] == "*":
                score[0] = score[0]*2
            elif result[0][3] == "#":
                score[0] = score[0]*-1
            
    elif len(result[0]) == 5:     
        score[0] == score[0] *-2
        
    #2번째     
    if len(result[1]) == 3:
        if score[1] != 10:
            if result[1][2] == "*":
                score[1] = score[1]*2
                score[0] = score[0]*2

            elif result[1][2] == "#":
                score[1] = score[1]*-1
            
            
    elif len(result[1]) == 4:
        if score[1] != 10:
            score[1] == score[1] *-2
        else:
            if result[1][3] == "*":
                score[1] = score[1]*2
            elif result[1][3] == "#":
                score[1] = score[1]*-1
        
    elif len(result[1]) == 5:     
        score[1] == score[1] *-2
    
    
    # 3번째
    if len(result[2]) == 3:
        if score[2] != 10:
            if result[2][2] == "*":
                score[1] = score[1]*2
                score[2] = score[2]*2

            elif result[2][2] == "#":
                score[2] = score[2]*-1
            
            
    elif len(result[2]) == 4:
        if score[2] != 10:
            score[2] == score[2] *-2
        else:
            if result[2][3] == "*":
                score[2] = score[2]*2
            elif result[2][3] == "#":
                score[2] = score[2]*-1
        
    elif len(result[2]) == 5:     
        score[2] == score[2] *-2

    answer = sum(score)
    
    return answer