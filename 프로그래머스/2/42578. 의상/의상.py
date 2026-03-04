import itertools

def solution(clothes):
    answer = 0
    index = len(clothes[0])
    
    for i in range(index):
        temp = itertools.combinations(arr, i)
        answer += len(temp)

    return answer