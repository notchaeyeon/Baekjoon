def solution(n):
    answer = 0
    count_n = trans_count(n)
    answer = n + 1
    
    while(1):
        if trans_count(answer) == count_n:
            return answer
        answer += 1
    
def trans_count(n):
    count = 0
    while(n>0):
        if n%2 != 0:
            count += 1
        n = n//2
    return count 