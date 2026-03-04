def solution(numbers):
    answer = 0
    res = []
    visited = [False] * len(numbers)

    def prime_number(n):
        if n <= 1: return 0
        elif n == 2: return 1
        else:
            for i in range(2, n//2+1):
                if n % i == 0:
                    return 0
        return 1
    
    def dfs(nums):
        def backtracking(curr):
            
            if curr[:] not in res and curr[:] != []:
                res.append(curr[:])
                
            for i in range(len(nums)):
                if visited[i] == False:
                    visited[i] = True
                    curr.append(nums[i])  
                    backtracking(curr)
                    curr.pop()
                    visited[i] = False
            return res
        
        backtracking([])

        return res
    
    res = dfs(numbers)
    for i in range(len(res)):
        if res[i] != []:
            res[i] = int("".join(res[i]))
    
    res = list(set(res))
    
    for i in range(len(res)):
        if prime_number(res[i]) == True:
            answer +=1
    
    return answer 