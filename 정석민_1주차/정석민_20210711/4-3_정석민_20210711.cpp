/*
길이가 42이고 0으로 초기화된 배열을 선언하자.
반복문을 통해서 10번 반복한다.
    숫자를 입력받고 42로 나눈 나머지를 인덱스로 해서 값을 1로 바꾼다.
배열을 순회하여 값이 1인 경우를 count하고 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int arr[42] = {0, };
    for ( int i = 0; i < 10; i++ ) {
        cin >> n;
        arr[n%42] = 1;
    }
    int count = 0;
    for ( int i = 0; i < 42; i++ ) {
        if ( arr[i] == 1 ) count++;
    }
    cout << count;
}