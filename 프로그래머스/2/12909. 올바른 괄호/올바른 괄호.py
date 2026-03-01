def solution(s):
    temp = []
    
    if s[-1] == "(" or len(s) % 2 != 0:
        return False
    
    for char in s:
        
        if char == "(":
            temp.append(char)

        elif char == ")" and len(temp)!=0:
            temp.pop()
            
        elif char == "(" and len(temp == 0):
            return False
            
    if len(temp) == 0:
        return True
    else:
        return False
