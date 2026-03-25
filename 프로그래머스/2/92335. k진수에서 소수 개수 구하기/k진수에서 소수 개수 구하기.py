from math import sqrt
import re
def solution(n, k):
    answer = 0
    li = []
    while n > k:
        li.append(n%k)
        n = n//k
        
    li.append(n)
    li.reverse()
    tmp = []

    for i in range(len(li)):
        if li[i] != 0:
            tmp.append(li[i])
            
    for i in range(len(li)):
        li[i] = str(li[i])
    lis = "".join(li)
    
    result = []
    
    result = lis.split("0")   
    
    for i in result:
        if i != "" and prime_num(int(i)) == True:
            answer += 1
            
    return answer

def prime_num(num):
    
    if num == 2:
        return True
    elif num == 1:
        return False
    for i in range(2,int(sqrt(num))+1):
        if num % i == 0:
            return False
    return True