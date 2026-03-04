from collections import deque

def solution(word):
    answer = 0
    mo_list = ['A', 'E', 'I', 'O', 'U']
    
    is_found = False
    
    def backtracking(num, curr):
        nonlocal answer, is_found
        
        if is_found == True: return
    
        if len(curr) == 5:
            return
        
        for next_v in num:
            curr.append(next_v)
            answer += 1
            
            if "".join(curr[:])==word:
                is_found=True
                break
                
            backtracking(mo_list, curr)
            if is_found == True: return

            curr.pop()
            

            

    backtracking(mo_list, [])
    
    return answer

    
