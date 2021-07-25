'''
등장한 적이 있는 알파벳을 리스트에 담을 것이다.
문자열을 입력받고 순회한다.
    연속되지 않은 알파벳이 나왔을 때,
        알파벳 리스트에 해당 문자가 있으면 break 한다.
        없으면 알파벳을 리스트에 담는다.
    문자열을 모두 순회했으면 count에 1을 더한다.
count를 출력한다.
'''

n = int(input())
count = 0

for i in range(n):
    k = 1
    s = input()
    li = s[0]
    for j in range(1, len(s)):
        if j > 0 and s[j-1] != s[j]:
            if s[j] in li:
                k = 0
                break
            else:
                li += s[j]
    if k == 1:
        count += 1
print(count)