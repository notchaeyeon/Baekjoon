from collections import deque
def solution(people, limit):
    answer = 0
    people.sort(reverse=True)
    people = deque(v for v in people)
    
    while(people):
        if len(people)>=2 and people[-1]+people[0]<=limit:
            people.pop()
            people.popleft()
            answer+=1
        else:
            people.popleft()
            answer+=1
        
    return answer