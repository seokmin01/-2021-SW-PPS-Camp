/*
n을 입력받는다.
n이 0이 될 때 까지 다음을 반복한다.
    n이 5로는 안나눠지는데 3으로는 나눠지면 3kg봉지를 하나 쓴다.
    위의 경우가 아니면 5kg봉지를 하나 쓴다.
    위의 경우가 아닌데 n이 5보다 작으면 -1을 출력하고 종료한다.
봉지의 개수를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    while ( n > 0 ) {
        if ( n % 5 != 0 && n % 3 == 0 ) {
            n -= 3;
            count++;
        }
        else if ( n >= 5 ) {
            n -= 5;
            count++;
        }
        else {
            cout << -1;
            return 0;
        }
    }
    cout << count;
}