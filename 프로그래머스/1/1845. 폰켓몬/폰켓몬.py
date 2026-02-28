def solution(nums):
    answer = 0
    pocket = {}
    target = len(nums) / 2
    
    for v in nums:
        pocket[v] = 0
        
    if len(pocket) < target:
        answer = len(pocket)
    else:
        answer = target
    
    return answer