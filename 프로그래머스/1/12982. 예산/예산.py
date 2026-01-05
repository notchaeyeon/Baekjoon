def solution(d, budget):
    answer = 0
    d = sorted(d)

    cost = 0

    for i in d:
        cost += i

        if cost > budget:
            break
        answer += 1


    return answer