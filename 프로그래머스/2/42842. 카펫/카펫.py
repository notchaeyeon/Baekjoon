def solution(brown, yellow):
    answer = []
    res = []
    
    res = nums(yellow)
        
    for i in range(len(res)):       
        temp = res[i][1] * 2 + res[i][0] * 2 + 4
            
        if temp == brown:
            answer = (res[i][1]+2, res[i][0]+2)
            break
            
    return answer

# 약수 구하기
def nums(yellow):
    res = []
    for i in range(1,yellow+1):
        if yellow % i == 0:
            res.append((i, yellow//i))
    return res
    