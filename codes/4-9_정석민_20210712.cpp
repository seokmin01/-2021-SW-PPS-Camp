/*
나머지를 활용하자.
답을 n이라고 하자.
n을 각각 E S M의 길이로 나눈 나머지가 입력 받은 수들과 일치해야 한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int e, s, m, n = 1;
    cin >> e >> s >> m;
    while (1) {
        if ( (n - e) % 15 == 0 && (n - s) % 28 == 0 && (n - m) % 19 == 0 )
            break;
        n++;
    }
    cout << n;
}
 