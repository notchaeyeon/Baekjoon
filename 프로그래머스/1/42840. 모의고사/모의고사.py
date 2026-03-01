def solution(answers):
    answer = []
    s = {1: 0, 2: 0, 3: 0}
    
    for i in range(len(answers)):
        n = [1, 2, 3, 4, 5]

        if answers[i] == n[i%5]:
            s[1] = s[1] + 1

    for i in range(len(answers)):
        n2 =  [2, 1, 2, 3, 2, 4, 2, 5]

        if answers[i] == n2[i%8]:
            s[2] = s[2] + 1

    for i in range(len(answers)):
        n3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
        
        if answers[i] == n3[i%10]:
            s[3] = s[3] + 1
    
    
    cur = max(s[1], s[2], s[3])
    
    if cur == s[1]:
        answer.append(1)
    if cur == s[2]:
        answer.append(2)
    if cur == s[3]:
        answer.append(3)
    
    
            
    return answer