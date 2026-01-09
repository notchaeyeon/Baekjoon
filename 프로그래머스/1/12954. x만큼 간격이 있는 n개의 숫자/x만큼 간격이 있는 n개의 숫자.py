def solution(x, n):
    answer = []
    diff = x

    for i in range(n):
        answer.append(x)
        x += diff
    return answer