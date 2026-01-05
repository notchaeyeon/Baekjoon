import itertools

def solution(nums):
    answer = 0
    nums = sorted(nums)
    res = []

    for p in itertools.combinations(nums, 3):
        res.append(p[0]+ p[1] + p[2])

    for i in range(len(res)):
        if is_prime(res[i]):
            answer +=1
        else: 
            continue
        
    return answer

def is_prime(num):

    i = 2
    while i<num:

        if num % i == 0:
            return 0

        else: 
            i+=1

    return 1

