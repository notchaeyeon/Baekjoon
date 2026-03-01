def solution(prices):
    answer = [0] * len(prices)
    stack = []
   
    for cur_time, price in enumerate(prices):
        while(stack and stack[-1][1] > price):
            prev_time, _ = stack.pop()
            answer[prev_time] = cur_time - prev_time
            
        stack.append((cur_time, price))
        
    if stack:
        while(stack):
            prev_time, _ = stack.pop()
            answer[prev_time] = len(prices) - prev_time -1

        
    return answer