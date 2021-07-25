'''
접미사 배열을 만들자.
[1:len(s)]와 같은 인덱스기능을 사용해서
앞 글자를 제거해 나가며 접미사 배열을 채운다.
접미사 배열을 sort하고 출력한다.
'''

li = []
s = input()
n = len(s)
for i in range(n):
    li.append(s)
    s = s[1:len(s)]
for i in sorted(li):
    print(i)