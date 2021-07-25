/*
월별 날짜의 수가 담긴 벡터를 생성한다.
요일의 이름이 담긴 벡터를 생성한다.
날짜가 2016년의 몇번째 날인지 구하고
7로 나눈 나머지를 구하여
요일의 이름을 반환한다.
*/

#include <bits/stdc++.h>
using namespace std;

string solution(int a, int b) {
    vector<int> month_day = {31,29,31,30,31,30,31,31,30,31,30,31};
    vector<string> week = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int day = 4;
    for ( int i = 0; i < a - 1; i++ )
        day += month_day[i];
    day += b;
    return week[day % 7];
}