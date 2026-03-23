from datetime import date

def solution(a, b):
    answer = ''
    week = ["MON","TUE","WED","THU","FRI","SAT","SUN"]
    now_date = date(2016, a, b)
    
    answer = now_date.weekday()
    answer = week[answer]
    
    return answer