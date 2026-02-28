def solution(phone_book):
    answer = True

    phone_book.sort()
    
    index = len(phone_book) #주어진 전화번호 개수
    
    for i in range(index - 1):
        length = len(phone_book[i]) #가장 작은 자리수 

        if phone_book[i] == phone_book[i+1][:length]:
            return False
    
    return answer