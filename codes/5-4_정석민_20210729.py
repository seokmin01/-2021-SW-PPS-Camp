'''
split를 사용하여 년, 월, 일 변수를 저장하자.
월의 일 수가 담긴 배열을 생성한다.
윤년이면 2월은 29일까지 있다.
month-1 까지의 월의 일 수를 모두 더하고 day를 더해서
몇번째 날인지 구한다.
'''

class Solution:
    def dayOfYear(self, date: str) -> int:
        year, month, day = date.split("-")
        year = int(year)
        month = int(month)
        day = int(day)
        month_days = [31,28,31,30,31,30,31,31,30,31,30,31]
        if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
            month_days[1] = 29
        days = 0
        for i in range( month - 1 ):
            days += month_days[i]
        days += day
        return days