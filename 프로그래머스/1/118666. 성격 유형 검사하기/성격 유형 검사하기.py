def solution(survey, choices):
    answer = []
    type = {'R': 0, 'T': 0,'C': 0, 'F': 0,'J': 0, 'M': 0,'A': 0, 'N': 0}
    #'R': 0, 'T': 0, // 'C': 0, 'F': 0, // 'J': 0, 'M': 0, // 'A':0, 'N': 0
    # <- 비동의 0 동의 ->
    for i in range(len(choices)):
        now_type = list(survey[i])

        if choices[i] == 7:
            type[now_type[1]] += 3
        elif choices[i] == 6:
            type[now_type[1]] += 2
        elif choices[i] == 5:
            type[now_type[1]] += 1
        elif choices[i] == 4:
            continue
        elif choices[i] == 3:
            type[now_type[0]] += 1
        elif choices[i] == 2:
            type[now_type[0]] += 2
        elif choices[i] == 1:
            type[now_type[0]] += 3

    if type['R'] >= type['T']:
        answer.append('R')
    else:
        answer.append('T')
    
    if type['C'] >= type['F']:
        answer.append('C')
    else:
        answer.append('F')
        
    if type['J'] >= type['M']:
        answer.append('J')
    else:
        answer.append('M')
    
    if type['A'] >= type['N']:
        answer.append('A')
    else:
        answer.append('N')
        
    answer =''.join(answer)
    return answer