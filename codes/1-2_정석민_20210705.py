'''
skill tree에서 skill에 없는 문자는 다 제거한다.
skill tree과 skill의 길이만큼 skill의 문자열을 자른 것과 비교한다.
    둘이 같으면 count에 1을 더한다.
count를 출력한다.
'''

def solution(skill, skill_trees):
    count = 0
    
    for skill_tree in skill_trees:
        str = ""
        for i in skill_tree:
            if i in skill:
                str += i
        if str == skill[0: len(str)]:
            count += 1
        
    return count