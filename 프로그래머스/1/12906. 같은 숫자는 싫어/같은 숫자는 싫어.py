def solution(arr):
    answer = []
    index = len(arr)
    
    if index == 1:
        answer.append(arr[0])
        return answer
    
    else:
        for i in range(index-1):
            if arr[i] != arr[i+1]:
                answer.append(arr[i])

        if answer and arr[-1] != answer[-1] and answer:
            answer.append(arr[-1])     
        else: 
            answer.append(arr[0])

            

    
    return answer