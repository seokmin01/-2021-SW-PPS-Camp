/*
큐를 사용하자.
큐의 길이가 1이 될 때 까지 다음을 반복한다.
    맨 앞의 숫자를 pop한다.
    그 다음 맨 앞의 숫자를 pop하고 맨 뒤에 push한다.
마지막 남은 숫자를 출력한다.
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    queue<int> q;
    cin >> n;
    for ( int i = 1; i <= n; i++ ) {
        q.push(i);
    }
    while ( q.size() > 1 ) {
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.front();
}