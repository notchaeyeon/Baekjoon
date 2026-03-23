import re
def solution(new_id):
    answer = ''
    new_id = new_id.lower()
    new_id = re.sub(r"[^a-z0-9-_.]", "", new_id)
    new_id = re.sub(r"[\.]+", ".", new_id)
    new_id = re.sub(r"\A[.]", "", new_id)
    new_id = re.sub(r"\.$", "", new_id)
    if new_id == "":
        new_id = "a"
    if len(new_id)>=16:
        new_id = new_id[:15]
    elif len(new_id)==2:
        tmp = list(new_id)
        tmp.append(tmp[-1])
        new_id = "".join(tmp)
    elif len(new_id)==1:
        tmp = list(new_id)
        tmp.append(tmp[-1])
        tmp.append(tmp[-1])
        new_id = "".join(tmp)
    
    new_id = re.sub(r"\A[.]", "", new_id)
    new_id = re.sub(r"\.$", "", new_id)
        

    return new_id