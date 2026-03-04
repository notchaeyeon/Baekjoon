from collections import defaultdict

def solution(clothes):
    answer = 1
    clo_list = defaultdict(list)
    for i in range(len(clothes)):
        clo_list[clothes[i][1]].append(clothes[i][0])
        
    for key in clo_list:
        answer *= len(clo_list[key]) + 1
        
    answer -= 1
    return answer