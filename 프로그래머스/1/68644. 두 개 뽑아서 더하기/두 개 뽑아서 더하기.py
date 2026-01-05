def solution(numbers):
    answer = []
    i = 0

    while i <len(numbers):
        j = i + 1
        while j<len(numbers):
            answer.append(numbers[i] + numbers[j])
            j+=1
        i += 1
    
    answer = sorted(set(answer))

    return answer