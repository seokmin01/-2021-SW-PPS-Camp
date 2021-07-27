/*
min 변수를 생성한다.
처음에 x, y를 입력받고 x/y 값을 min에 저장한다.
x/y는 1g당 삼각김밥의 가격이다.
n을 입력받고 n만큼 반복한다.
    x, y를 입력받고 x/y 값이 min보다 작으면,
    x/y 값을 min에 저장한다.
min에 1000을 곱하고 소수점 두 자릿수 까지 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y, min;
    int n;
    cin >> x >> y >> n;
    min = x/y;
    for ( int i = 0; i < n; i++ ) {
        cin >> x >> y;
        if ( min > x/y ) min = x/y;
    }
    printf("%.2f", min * 1000);
}