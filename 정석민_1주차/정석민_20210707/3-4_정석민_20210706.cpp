/*
첫번째 문을 여는 방법을 저장하고 0과 1을 번갈아가며 다음을 확인한다.
    2의 배수의 문들의 숫자가 2번째 문의 숫자와 같은지 판별한다.
    3의 배수의 문들의 숫자가 3번째 문의 숫자와 같은지 판별한다.
    같지 않으면 "Love is open door"를 출력하고 프로그램을 종료한다.
숫자를 두 번째부터 번갈아 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    bool first, curr;
    cin >> n >> first;

    for ( int i = 1; i < n; i++ ) {
        if ( i % 2 == 0 )
            curr = first;
        else
            curr = !(first);
        if ( i % 3 == 2 && curr != first){
            cout << "Love is open door";
            return 0;
        }
    }
    
    for ( int i = 1; i < n; i++ ) {
        if ( i % 2 == 0 )
            cout << first << '\n';
        else
            cout << !(first) << '\n';
    }
}