from collections import deque

def solution(bridge_length, weight, truck_weights):
    answer = 0
    truck = deque(i for i in truck_weights)
    bri = deque()
    done = []
    sum = 0
    
    while(len(done) != len(truck_weights)):
        answer+=1
        
        if len(bri) == bridge_length:
            if bri[0] == 0:
                bri.popleft()
            else: 
                sum -= bri[0]
                done.append(bri.popleft())
            
        if sum < weight and truck and (truck[0] + sum) <= weight:
            bri.append(truck.popleft())
            sum += bri[-1]          
            
        else:
            bri.append(0)
                
    return answer