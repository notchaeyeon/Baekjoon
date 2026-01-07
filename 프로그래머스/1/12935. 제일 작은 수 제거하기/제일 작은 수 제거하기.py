
def solution(arr):
    answer = []

    if len(arr) == 1:
        answer = [-1]

    else:
        min_value = min(arr)
        arr.remove(min_value)
        answer = arr

    return answer
