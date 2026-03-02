def solution(numbers, target):
    answer = 0
    res=[]
    
    def dfs(num, sum):

        if num == len(numbers):
            if sum == target:
                return 1
            else:
                return 0
            
        return dfs(num+1,sum+numbers[num]) + dfs(num+1,sum-numbers[num])
                    
    answer = dfs(0,0)
        
    return answer